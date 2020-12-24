#include<stdio.h>
int main()
{
    int T,N,i;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%d",&N);
            N=N*567;
            N=N/9;
            N=N+7492;
            N=N*235;
            N=N/47;
            N=N-498;
            N=N/10;
            N=N%10;
            if(N<0)
                N=N*(-1);
            printf("%d\n",N);
        }
    }
    return 0;
}
