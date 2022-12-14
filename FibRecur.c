/* 
Q8: Write a program to print Fibonacci Series using Recursion. */
#include<stdio.h>    
void printFibonacci(int n)
{    
    static int n1=0,n2=1,n3;    
    if(n>0)
    {    
         n3=n1+n2;    
         n1=n2;    
         n2=n3;    
         printf("\t%d", n3);    
         printFibonacci(n-1);    
    }    
}    
int main()
{    
    int n;    
    printf("Enter the number of elements: ");    
    scanf("%d",&n);    
    printf("Fibonacci Series: ");    
    printf("%d\t%d ",0,1);    
    printFibonacci(n-2); 
  return 0;  
 }  