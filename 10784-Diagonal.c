#include<stdio.h>
#include<math.h>
int main()
{
    long int n,dia,i=1;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)break;
        dia=ceil((3+sqrt(9+(8*n)))/2);
        printf("Case %ld: %ld\n",i++,dia);
    }
return 0;
}
