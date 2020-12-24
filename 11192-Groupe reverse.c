#include<stdio.h>
#include<string.h>
int main()
{
    char s[105];
    int n,i,len,r,t,j;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
            scanf(" ");
            gets(s);
        len=strlen(s);
        r=len/n;
        for(i=1;i<=n;i++)
        {
            t=i*r;
           for(j=t-1;j>=t-r;j--)
            printf("%c",s[j]);
        }
        printf("\n");
    }
    return 0;
}

