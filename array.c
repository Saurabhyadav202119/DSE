// a program to seach an array in 2D \\



#include<stdio.h>
int main ()
{
   int arr[2][3],i,j,n;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEnter value of 2D Array:\n");
            scanf("%d",&arr[i][j]);

        }
    }
    printf("\nEnter Number to seach:");
    scanf("%d",&n);
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]==n)
            {
                printf("element found at arr[%d][%d]:",i,j);
            
            }
        }
        
    }
    return 0;
}