#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    char s[100];int n,m,i,k,j;
    printf("enter odd number\n");
    scanf("%d",&n);
    printf("enter odd letter word\n");
    for (i=0;i<n;i++)
    {
        scanf("%c",&s[i]);
    }
    m=n/2;k=m+1;
    for(i=0;i<n;i++)
    {
       for(j=n-i;j>1;j--)
       {
           printf(" ");
       }
        printf("%c ",s[m]);
    printf("\n");
    }
    return 0;
}
