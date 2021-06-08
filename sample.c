#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
char str[100],middle;
int i=0,len,j,k,s;
printf("Enter word with odd letters");
gets(str);
while(str[i]!='\0')
    i++;
len=i;
//s=len-1;
middle=str[len/2];
for(j=0;j<len;j++)
{
    s=len-j-1;
    for(k=0;k<len;k++)
    {
        while(s!=0)
        {
            printf("/t",s);
            s--;
    }
    }
    printf("%c",middle);
    if(k!=len-1)
        printf("%c",str[middle+1]);

printf("\n");
}
}

