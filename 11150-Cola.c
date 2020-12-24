#include<stdio.h>
int main()
{
    int n,x;
    while(scanf("%d",&n)==1)
    {
        x=n;
        while(n>=3)
        {
            x=x+n/3;
            n=n/3+n%3;
        }
        if(n==2)
            x++;
        printf("%d\n",x);      
    }
    return 0;
}
