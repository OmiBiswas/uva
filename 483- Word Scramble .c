#include<stdio.h>
#include<string.h>
int main()
{
    char s[2000];
    int i,j,l,x;
    while(gets(s))
    {
        l=strlen(s);
        x=-1;
        for(i=0;i<l;i++)
        {
            if(s[i]==' ')
            {
               for(j=i-1;j>x;j--)
                printf("%c",s[j]);
                printf(" ");
                x=i;
            }
        }
        for(i=l-1;i>x;i--)
            printf("%c",s[i]);
        printf("\n");
  }
  return 0;
}
