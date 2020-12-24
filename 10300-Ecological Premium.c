#include<stdio.h>
int main()
{
    long long int T,N,a,b,c,sum,i,j;
    while(scanf("%lld",&T)==1)
    {
        for(i=1;i<=T;i++)
        {
            sum=0;
            scanf("%lld",&N);
            for(j=1;j<=N;j++)
            {
                scanf("%lld %lld %lld",&a,&b,&c);
                sum=sum+(a*c);
            }
            printf("%lld\n",sum);
        }
    }
    return 0;
}


