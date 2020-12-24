#include<stdio.h>
int main()
{
    long long N,T,X,L,count;
    int i;
    while(scanf("%lld",&T)==1)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%lld",&N);
            X=N;
            count=0;
            while(1)
            {
               L=0;
               while(N!=0)
               {
                   L=L*10+N%10;
                   N=N/10;
               }
               if(L==X)
               {
                break;
               }
               else
               {
                   N=L+X;
                   X=L+X;
                   count++;
               }
            }
            printf("%lld %lld\n",count,X);
        }
    }
    return 0;

}
