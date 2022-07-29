#include <stdio.h>  //To input a string using getch() and loop.
#include <string.h>
void main()
{
    int i=0;
    char name[20];
    printf("Enter Name: ");
    while((name[i]=getchar())!='\n')
    i++;
    getch();
}