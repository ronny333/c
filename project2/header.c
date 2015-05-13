#include<stdio.h>
#include<stdlib.h>
struct st
{
int roll;
char name[10];
float marks;
struct st *next;
};
void print(struct st *ptr);
void add_end(struct st **ptr);
void read_file(struct st *ptr);
