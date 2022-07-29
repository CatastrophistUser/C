#include <stdio.h>  //Input a string using putchar
#include <conio.h>
int main()
{
    char str[]="Strings in C\n";
    int i=0;
    while(str[i]!='\0')
    {
        putchar(str[i]);
        i++;
    }
    return 0;
}