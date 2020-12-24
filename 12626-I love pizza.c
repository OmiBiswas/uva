#include<stdio.h>
#include<string.h>
int main()
{
    int j,k,T,l;
    char S[605];
    while(scanf("%d",&T)==1)
    {
        for(j=1;j<=T;j++)
        {
          scanf("%s",S);l=strlen(S);int m=0,a=0,r=0,g=0,i=0,t=0,n=0;
          for(k=0;k<l;k++)
           {
               if(S[k]=='M')m++;
               else if(S[k]=='A')a++;
               else if(S[k]=='R')r++;
               else if(S[k]=='G')g++;
               else if(S[k]=='I')i++;
               else if(S[k]=='T')t++;
        }
        while(m>=1 && a>=3 && r>=2 && g>=1 && i>=1 && t>=1)
        {
            n++;
            m--;a=a-3;r=r-2;g--,i--,t--;
           }
           printf("%d\n",n);
            }
    }
    return 0;
    }
