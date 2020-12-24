#include<stdio.h>
int main()
{
    long int n,k,a,b,x;
    while(scanf("%ld %ld",&n,&k)==2)
    {
        x=n;
        while(n>=k)
        {
            a=n/k;
            b=n%k;
            x=x+a;
            n=a+b;
            }
            printf("%ld\n",x);
    }
    return 0;
}
