#include <stdio.h>
void pattern(int row)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
int row;
printf("Enter number of rows: ");
scanf("%d",&row);
pattern(row);
/* switch(n)
{
    case 0: for(int i=1;i<=n;i++)
            {
                printf("*\n");
            } 
    case 1: for(int i=0;i>=n;i--)
            {
               // printf("*");
            }
} */
return 0;
}