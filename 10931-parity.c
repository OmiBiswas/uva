#include<stdio.h>
int main()
{
    long long n,i,j,array[1000],c,x;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
            c=0;
        for(i=0;;i++)
        {
            x=n%2;
            if(x==1)
            c++;
            array[i]=x;
            if(n==0)
            break;
            n=n/2;
        }
        printf("The parity of ");
        for(j=i-1;j>=0;j--)
        printf("%lld",array[j]);
        printf(" is %lld (mod 2).\n",c);

    }
    return 0;
}
