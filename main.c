#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,s,t,i,j;
    printf("enter no of lines\n");
    scanf("%d",&n);
    printf("enter starting number\n");
    scanf("%d",&s);
    t=2*n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<t;j++)
        {
         if((j==n-j-1)||(j==n+j-1))
                printf("%d",s);
         //printf(" ");
        }
    }
    return 0;
}
