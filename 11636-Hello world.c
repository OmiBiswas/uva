#include<stdio.h>
int main()
{
    int N,r=0,l,t;
    while(scanf("%d",&N)==1)
    {
        if(N<0)
            break;
        r++;
        l=1;
        t=0;
        while(l<N)
        {
            l=l+l;
            t=t+1;
            }
            printf("Case %d: %d\n",r,t);
    }
    return 0;
}
