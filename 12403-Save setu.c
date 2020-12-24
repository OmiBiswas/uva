#include<stdio.h>
#include<string.h>
int main()
{
    long int i,T,K,sum;
    char s[20];
    while(scanf("%ld",&T)==1)
    {
        sum=0;
        for(i=1;i<=T;i++)
        {
            scanf("%s",&s);
            if(strcmp(s,"donate")==0)
            {
                scanf("%ld",&K);
                sum=sum+K;
            }
            else
            printf("%ld\n",sum);
        }
    }
    return 0;
}
