#include<stdio.h>
int main()
{
    long long n,a,i,b,x;
    scanf("%lld",&n);
     for(i=1;i<=n;i++)
     {
         scanf("%lld %lld",&a,&b);
         x=(((b+b)-(1+a))*a)/2;
         printf( "%lld\n",x);
     }
     return 0;
}
