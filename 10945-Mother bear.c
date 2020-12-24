#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],s[100];
    int i,x,r,j,n;
    while(gets(a))
    {
        if(strcmp(a,"DONE")==0)
        break;
        n=strlen(a);
        r=0;
        for(i=0,x=0;i<n;i++)
        {
          if(a[i]>='A' && a[i]<='Z')
             a[i]=97+(a[i]-'A');
          if(a[i]>='a' && a[i]<='z')
          {
              s[x]=a[i];
              x++;
          }
        }
        for(i=0,j=x-1;i<j;i++,j--)
        {
            if(s[i]!=s[j])
            {
                r=1;
                printf("Uh oh..\n");
                break;
            }
            else
                r=0;
        }
        if(r==0)
            printf("You won't be eaten!\n");
        }
        return 0;

}
