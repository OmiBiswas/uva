#include<stdio.h>
int main()
{
    long int m,n;
    while(scanf("%ld %ld",&m,&n)==2)
    {
        printf("%ld\n",m*n-1);
    }
    return 0;
}
