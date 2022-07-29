/* 
Q10: Write a program to count the number of consonants 
and variable in a given string using pointers.       */

#include <stdio.h>
int main()
{
    char str[100];                 // declaring an array to store string.
    char *p;                       // declaring pointer
    int  vCount=0, cCount=0;

    printf("Enter any string: ");
    fgets(str, 100, stdin);
    p=str;                         // Assigns base address of char array to pointer
    while(*p!='\0')                // '\0' signifies end of the string
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U' 
        ||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            vCount++;
        else
            cCount++;
        p++;                        // Increase the pointer, to point next character
    }

    printf("Number of Vowels in String: %d\n",vCount);
    printf("Number of Consonants in String: %d",cCount);
    return 0;
}
