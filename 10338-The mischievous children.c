#include<stdio.h>
#include<string.h>
int main()
{
    long long int str[15]={1},i,j,k,T,l,r,sum;//submit c++
    char array[22];
    for(i=1;i<15;i++)
       {
           sr[i]=str[i-1]*i;
       }
       scanf("%lld",&T);
       for(j=1;j<=T;j++)
       {
           scanf("%s",array);
           l=strlen(array);
           long long int ch[26]={0};
           for(k=0;k<l;k++)
            ch[array[k]-65]++;
           r=1;
           for(k=0;k<26;k++)
            if(ch[k]>1)
            r=r*str[ch[k]];
            sum=str[l]/r;
            printf("Data set %lld: %lld\n",j,sum);
           }
           return 0;
}
