#include<stdio.h>
main()
{
	/**
Simple TCP client to fetch a web page
Silver Moon (m00n.silv3r@gmail.com)
*/

#include<stdio.h>
#include<string.h>    //strlen
#include <sys/stat.h> 
#include<winsock2.h>

#pragma comment(lib,"ws2_32.lib") //Winsock Library

#include <Gdiplus.h>

using  namespace Gdiplus;
//#define filename L"screenshot.bmp";
#pragma comment (lib, "gdiplus.lib" )

int GetEncoderClsid(const WCHAR *format, CLSID *PClsid)
{
	UINT num = 0;           // number of image encoders 
	UINT size = 0;          // size of the image encoder array in bytes

	ImageCodecInfo * pImageCodecInfo = NULL;
	printf("In GetEncoderClsid...\n ");
	GetImageEncodersSize(&num, &size);
	if (size == 0)
		return -1;   // Failure

	pImageCodecInfo = (ImageCodecInfo *)(malloc(size));
	if (pImageCodecInfo == NULL)
		return -1;   // Failure

	GetImageEncoders(num, size, pImageCodecInfo);

	for (UINT j = 0; j <num; ++j)
	{
		if (wcscmp(pImageCodecInfo[j].MimeType, format) == 0)
		{
			*PClsid = pImageCodecInfo[j].Clsid;
			free(pImageCodecInfo);
			return j;   // Success
		}
	}

	free(pImageCodecInfo);
	return -1;   // Failure
}
void bmp_to_png()
{
	HANDLE BmpFile = INVALID_HANDLE_VALUE;    // destination .bmp file

	GdiplusStartupInput gdiplusStartupInput;
	ULONG_PTR gdiplusToken;
	GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);


	CLSID   encoderClsid;
	Status  stat;
	Image*   image = new Image(L"screenshot.bmp", NULL);

	// Get the CLSID of the PNG encoder.
	GetEncoderClsid(L"image/png", &encoderClsid);

	stat = image->Save(L"screenshot.png", &encoderClsid, NULL);

	if (stat == Ok)
		printf("screenshot.png was saved successfully\n");
	else
		printf("Failure: stat = %d\n", stat);

	delete image;
	GdiplusShutdown(gdiplusToken);


}
/*
#ifdef _MSC_VER
#    pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:main")
#endif
*/
// Helper function to retrieve current position of file pointer:
inline int GetFilePointer(HANDLE FileHandle){
	return SetFilePointer(FileHandle, 0, 0, FILE_CURRENT);
}
//---------------------------------------------------------------------------

// Screenshot
//    -> FileName: Name of file to save screenshot to
//    -> lpDDS: DirectDraw surface to capture
//    <- Result: Success
//
extern bool SaveBMPFile(LPCWSTR filename, HBITMAP bitmap, HDC bitmapDC, int width, int height){
	bool Success = false;
	HDC SurfDC = NULL;        // GDI-compatible device context for the surface
	HBITMAP OffscrBmp = NULL; // bitmap that is converted to a DIB
	HDC OffscrDC = NULL;      // offscreen DC that we can select OffscrBmp into
	LPBITMAPINFO lpbi = NULL; // bitmap format info; used by GetDIBits
	LPVOID lpvBits = NULL;    // pointer to bitmap bits array
	HANDLE BmpFile = INVALID_HANDLE_VALUE;    // destination .bmp file
	BITMAPFILEHEADER bmfh;  // .bmp file header

	// We need an HBITMAP to convert it to a DIB:
	if ((OffscrBmp = CreateCompatibleBitmap(bitmapDC, width, height)) == NULL)
		return false;

	// The bitmap is empty, so let's copy the contents of the surface to it.
	// For that we need to select it into a device context. We create one.
	if ((OffscrDC = CreateCompatibleDC(bitmapDC)) == NULL)
		return false;

	// Select OffscrBmp into OffscrDC:
	HBITMAP OldBmp = (HBITMAP)SelectObject(OffscrDC, OffscrBmp);

	// Now we can copy the contents of the surface to the offscreen bitmap:
	BitBlt(OffscrDC, 0, 0, width, height, bitmapDC, 0, 0, SRCCOPY);

	// GetDIBits requires format info about the bitmap. We can have GetDIBits
	// fill a structure with that info if we pass a NULL pointer for lpvBits:
	// Reserve memory for bitmap info (BITMAPINFOHEADER + largest possible
	// palette):
	if ((lpbi = (LPBITMAPINFO)(new char[sizeof(BITMAPINFOHEADER) + 256 * sizeof(RGBQUAD)])) == NULL)
		return false;


	ZeroMemory(&lpbi->bmiHeader, sizeof(BITMAPINFOHEADER));
	lpbi->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
	// Get info but first de-select OffscrBmp because GetDIBits requires it:
	SelectObject(OffscrDC, OldBmp);
	if (!GetDIBits(OffscrDC, OffscrBmp, 0, height, NULL, lpbi, DIB_RGB_COLORS))
		return false;

	// Reserve memory for bitmap bits:
	if ((lpvBits = new char[lpbi->bmiHeader.biSizeImage]) == NULL)
		return false;

	// Have GetDIBits convert OffscrBmp to a DIB (device-independent bitmap):
	if (!GetDIBits(OffscrDC, OffscrBmp, 0, height, lpvBits, lpbi, DIB_RGB_COLORS))
		return false;

	// Create a file to save the DIB to:
	if ((BmpFile = CreateFile(filename, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL)) == INVALID_HANDLE_VALUE)
		return false;

	DWORD Written;    // number of bytes written by WriteFile

	// Write a file header to the file:
	bmfh.bfType = 19778;        // 'BM'
	// bmfh.bfSize = ???        // we'll write that later
	bmfh.bfReserved1 = bmfh.bfReserved2 = 0;
	// bmfh.bfOffBits = ???     // we'll write that later
	if (!WriteFile(BmpFile, &bmfh, sizeof(bmfh), &Written, NULL))
		return false;

	if (Written < sizeof(bmfh))
		return false;

	// Write BITMAPINFOHEADER to the file:
	if (!WriteFile(BmpFile, &lpbi->bmiHeader, sizeof(BITMAPINFOHEADER), &Written, NULL))
		return false;

	if (Written < sizeof(BITMAPINFOHEADER))
		return false;

	// Calculate size of palette:
	int PalEntries;
	// 16-bit or 32-bit bitmaps require bit masks:
	if (lpbi->bmiHeader.biCompression == BI_BITFIELDS)
		PalEntries = 3;
	else
		// bitmap is palettized?
		PalEntries = (lpbi->bmiHeader.biBitCount <= 8) ?
		// 2^biBitCount palette entries max.:
		(int)(1 << lpbi->bmiHeader.biBitCount)
		// bitmap is TrueColor -> no palette:
		: 0;
	// If biClrUsed use only biClrUsed palette entries:
	if (lpbi->bmiHeader.biClrUsed)
		PalEntries = lpbi->bmiHeader.biClrUsed;

	// Write palette to the file:
	if (PalEntries){
		if (!WriteFile(BmpFile, &lpbi->bmiColors, PalEntries * sizeof(RGBQUAD), &Written, NULL))
			return false;

		if (Written < PalEntries * sizeof(RGBQUAD))
			return false;
	}

	// The current position in the file (at the beginning of the bitmap bits)
	// will be saved to the BITMAPFILEHEADER:
	bmfh.bfOffBits = GetFilePointer(BmpFile);

	// Write bitmap bits to the file:
	if (!WriteFile(BmpFile, lpvBits, lpbi->bmiHeader.biSizeImage, &Written, NULL))
		return false;

	if (Written < lpbi->bmiHeader.biSizeImage)
		return false;

	// The current pos. in the file is the final file size and will be saved:
	bmfh.bfSize = GetFilePointer(BmpFile);

	// We have all the info for the file header. Save the updated version:
	SetFilePointer(BmpFile, 0, 0, FILE_BEGIN);
	if (!WriteFile(BmpFile, &bmfh, sizeof(bmfh), &Written, NULL))
		return false;
	FlushFileBuffers(BmpFile);
	CloseHandle(BmpFile);
	if (Written < sizeof(bmfh))
		return false;
	//	bmp_to_png();
	return true;
}


bool ScreenCapture(int x, int y, int width, int height, LPCWSTR filename){
	// get a DC compat. w/ the screen
	HDC hDc = CreateCompatibleDC(0);

	// make a bmp in memory to store the capture in
	HBITMAP hBmp = CreateCompatibleBitmap(GetDC(0), width, height);

	// join em up
	SelectObject(hDc, hBmp);

	// copy from the screen to my bitmap
	BitBlt(hDc, 0, 0, width, height, GetDC(0), x, y, SRCCOPY);

	// save my bitmap
	bool ret = SaveBMPFile(filename, hBmp, hDc, width, height);
	printf("ret = %d\n", ret);

	// free the bitmap memory


	DeleteObject(hBmp);

	//DeleteObject(hDc);

	return ret;
}


void send_file(int sock, char filename[10])
{
	struct stat obj;
	printf("---file send----%s\n", filename);
	char buf[1025];
	printf("now open..\n");
	//    const char* filename = "screenshot.png"; 
	FILE *file = fopen(filename, "rb");
	if (!file)
	{
		printf("Can't open file for reading");
		return;
	}
	perror("fopen");
	stat(filename, &obj);
	perror("stat");
	int fsize = obj.st_size;
	printf("====file size is %d====\n", fsize);
	send(sock, (char *)&fsize, 4, 0);

	while (!feof(file))
	{
		int rval = fread(buf, 1, sizeof(buf), file);
		if (rval < 1)
		{
			printf("Can't read from file");
			fclose(file);
			return;
		}

		int off = 0;
		do
		{
			int sent = send(sock, &buf[off], rval - off, 0);
			if (sent < 1)
			{
				// if the socket is non-blocking, then check
				// the socket error for WSAEWOULDBLOCK/EAGAIN
				// (depending on platform) and if true then
				// use select() to wait for a small period of
				// time to see if the socket becomes writable
				// again before failing the transfer...

				printf("Can't write to socket");
				fclose(file);
				return;
			}

			off += sent;
		} while (off < rval);
	}

	fclose(file);

}

int main(int argc, char *argv[])
{
	FILE *fp;
	int socket_desc;
	struct sockaddr_in server;
	char message[256], server_reply[6000];
	char s[20];
	WSADATA wsa;
	int x_reso=0,y_reso=0;
	DWORD dwWidth = GetSystemMetrics(SM_CXSCREEN);
	DWORD dwHeight = GetSystemMetrics(SM_CYSCREEN);
	printf("\nInitialising Winsock...x= %d and y= %d\n", dwWidth, dwHeight);
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
	{
		printf("Failed. Error Code : %d", WSAGetLastError());
		return 1;
	}
	printf("Now start...\n");
	//	fp=fopen("screenshot.png","r");
	//	perror("fopen");
	//Create socket
	socket_desc = socket(AF_INET, SOCK_STREAM, 0);
	if (socket_desc == -1)
	{
		printf("Could not create socket");
	}
	perror("socket");
	//ip address of www.msn.com (get by doing a ping www.msn.com at terminal)
	server.sin_addr.s_addr = inet_addr("192.168.137.4");
	server.sin_family = AF_INET;
	server.sin_port = htons(1236);

	//Connect to remote server
	if (connect(socket_desc, (struct sockaddr *)&server, sizeof(server)) < 0)
	{
		puts("connect error");
		return 1;
	}

	int cnt = 0;
		puts("Connected\n");
		recv(socket_desc, (char *)&x_reso, 4, 0);
		recv(socket_desc, (char *)&y_reso, 4, 0);
		printf("--------------Server screen x_resolution = %d and y_resolution= %d----------\n",x_reso,y_reso);

	while (cnt++<20)
	{
		//, t = 0;;
		int r = FALSE;
		r = ScreenCapture(0, 0, x_reso, y_reso, L"screenshot.bmp");
	
		bmp_to_png();
		strcpy(s, "screenshot.png");
	
		send_file(socket_desc, s);
	//	Sleep(0.5);
	}
	closesocket(socket_desc);

	WSACleanup();
	
	return 0;
}
/*
 * A simple libpng example program
 * http://zarb.org/~gc/html/libpng.html
 *
 * Modified by Yoshimasa Niwa to make it much simpler
 * and support all defined color_type.
 *
 * To build, use the next instruction on OS X.
 * $ brew install libpng
 * $ clang -lz -lpng15 libpng_test.c
 *
 * Copyright 2002-2010 Guillaume Cottenceau.
 *
 * This software may be freely redistributed under the terms
 * of the X11 license.
 *
 */

 #include <unistd.h>

 #include <fcntl.h>
 #include <linux/fb.h>
 #include <sys/mman.h>
 #include <sys/ioctl.h>
#include <stdlib.h>
#include <stdio.h>
#include <png.h>
 
int width, height;
png_byte color_type;
png_byte bit_depth;
png_bytep *row_pointers;
 
void read_png_file(char *filename) {
 	 FILE *fp = fopen(filename, "rb");
	 int y;
  	png_structp png = png_create_read_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
	  if(!png) abort();
 
	  png_infop info = png_create_info_struct(png);
	  if(!info) abort();
 
	  if(setjmp(png_jmpbuf(png))) abort();
 
  	  png_init_io(png, fp);
 
	png_read_info(png, info);
 
	width      = png_get_image_width(png, info);
  	height     = png_get_image_height(png, info);
	color_type = png_get_color_type(png, info);
  	bit_depth  = png_get_bit_depth(png, info);
 	printf("---bit_length=%d------\n",bit_depth);

 
  	if(bit_depth == 16)
	{
	printf("In bit_depth==16");
	    png_set_strip_16(png);
 	}
	  if(color_type == PNG_COLOR_TYPE_PALETTE)
	    png_set_palette_to_rgb(png);
 
  // PNG_COLOR_TYPE_GRAY_ALPHA is always 8 or 16bit depth.
	  if(color_type == PNG_COLOR_TYPE_GRAY && bit_depth < 8)
	    png_set_expand_gray_1_2_4_to_8(png);
 
	  if(png_get_valid(png, info, PNG_INFO_tRNS))
	    png_set_tRNS_to_alpha(png);
 
  // These color_type don't have an alpha channel then fill it with 0xff.
  	if(color_type == PNG_COLOR_TYPE_RGB ||
	     color_type == PNG_COLOR_TYPE_GRAY ||
	     color_type == PNG_COLOR_TYPE_PALETTE)
	    png_set_filler(png, 0xFF, PNG_FILLER_AFTER);
 
	  if(color_type == PNG_COLOR_TYPE_GRAY ||
	     color_type == PNG_COLOR_TYPE_GRAY_ALPHA)
	    png_set_gray_to_rgb(png);
 
	  png_read_update_info(png, info);
 
	  row_pointers = (png_bytep*)malloc(sizeof(png_bytep) * height);
	
  for(y = 0; y < height; y++) {
	    row_pointers[y] = (png_byte*)malloc(png_get_rowbytes(png,info));
  	}
 
  png_read_image(png, row_pointers);
 
  fclose(fp);
}
 
void write_png_file(char *filename) {
  int y;
 
	FILE *fp = fopen(filename, "wb");
	  if(!fp) abort();
 
	  png_structp png = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
	  if (!png) abort();
 
	  png_infop info = png_create_info_struct(png);
	  if (!info) abort();
 
	  if (setjmp(png_jmpbuf(png))) abort();
 
	  png_init_io(png, fp);
 
	  // Output is 8bit depth, RGBA format.
	  png_set_IHDR(
	    png,
	    info,
	    width, height,
	    8,
	    PNG_COLOR_TYPE_RGBA,
	    PNG_INTERLACE_NONE,
	    PNG_COMPRESSION_TYPE_DEFAULT,
	    PNG_FILTER_TYPE_DEFAULT
	  );
	  png_write_info(png, info);
	 
	  // To remove the alpha channel for PNG_COLOR_TYPE_RGB format,
	  // Use png_set_filler().
	  //png_set_filler(png, 0, PNG_FILLER_AFTER);
	 
	  png_write_image(png, row_pointers);
	  png_write_end(png, NULL);
	 
	  for(y = 0; y < height; y++) {
	    free(row_pointers[y]);
	  }
	  free(row_pointers);
	 
	  fclose(fp);
}

void process_png_file() 
{
	int fbfd = 0;
     struct fb_var_screeninfo vinfo;
     struct fb_fix_screeninfo finfo;
     long int screensize = 0;
     char *fbp = 0;
     int x = 0, y = 0;
     long int location = 0;

     // Open the file for reading and writing
     fbfd = open("/dev/fb0", O_RDWR);
     if (fbfd == -1) {
         perror("Error: cannot open framebuffer device");
         exit(1);
     }
     printf("The framebuffer device was opened successfully.\n");

     // Get fixed screen information
     if (ioctl(fbfd, FBIOGET_FSCREENINFO, &finfo) == -1) {
         perror("Error reading fixed information");
         exit(2);
     }

     // Get variable screen information
     if (ioctl(fbfd, FBIOGET_VSCREENINFO, &vinfo) == -1) {
         perror("Error reading variable information");
         exit(3);
     }

     printf("%dx%d, %dbpp\n", vinfo.xres, vinfo.yres, vinfo.bits_per_pixel);

     // Figure out the size of the screen in bytes
     screensize = vinfo.xres * vinfo.yres * vinfo.bits_per_pixel / 8;

     // Map the device to memory
     fbp = (char *)mmap(0, screensize, PROT_READ | PROT_WRITE, MAP_SHARED,fbfd, 0);
     if ((int)fbp == -1) {
         perror("Error: failed to map framebuffer device to memory");
         exit(4);
     }
//vinfo.bits_per_pixel=32;
     printf("The framebuffer device was mapped to memory successfully.---h=%d w=%d ss=%d and bits_per_pixel=%d---------r=%d g=%d and B= %d\n",height,width,screensize,vinfo.bits_per_pixel,vinfo.red.offset,vinfo.green.offset,vinfo.blue.offset);

for (y = 0; y < height; y++)
{
png_bytep row = row_pointers[y];        

	 for (x = 0; x < width; x++) 
	{
		png_bytep px = &(row[x * 4]);

		location = (x+vinfo.xoffset) * (vinfo.bits_per_pixel/8) + (y+vinfo.yoffset) * finfo.line_length;
             
             if (vinfo.bits_per_pixel == 32)
	     {
		   *(fbp + location) = px[0];     //Red       
                 *(fbp + location + 1) = px[1]/2; //Blue
                *(fbp + location + 2) = px[2]/2;  //Green  
                *(fbp + location + 3) = 0;
             } 
	    else  
	    { //assume 16bpp

        	/*32 bit to 16 bit conversion*/
                 int b = px[2]>>3;   //Blue
                 int g = px[1]>>2;   //Green
                 int r = px[0]>>3;   // Red
                 unsigned short int t = ((r<<11) | (g << 5) | b); 
                 *((unsigned short int*)(fbp + location)) = t;
             }

         }
}     
}
 /*Give two arguments..Usage: <1.executable file> <2.image(.png)>*/
int main(int argc, char *argv[]) {
  if(argc != 2) abort();
 
printf("Before read file...\n");
  read_png_file(argv[1]);
  process_png_file();
 // write_png_file(argv[2]);
 
  return 0;
}


/*int a[2][3]={1,2,3,4,5,6};
int i,j;
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	printf("%d ",a[i][j]);
printf("\n");
}
OUTPUT:1 2 3 
       4 5 6

*/

/*int a[2][3]={1,2,3,4};
int i,j;
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	printf("%d ",a[i][j]);
printf("\n");
}

OUTPUT:1 2 3
       4 0 0
*/
int a[2][3]={{1,2},{3,4}};
int i,j;
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	printf("%d at %u\t",a[i][j],&a[i][j]);
printf("\n");
}



}
