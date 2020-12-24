#include<stdio.h>
int main()
{
    long long int n,i,sum;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
            long long int x=0,y=1;
            for(i=1;i<=n;i++)
            {
                sum=x+y;
                x=y;
                y=sum;
            }
            printf("%lld\n",sum);


    }
}
