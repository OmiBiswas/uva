#include<stdio.h>
int main()
{
    int i,j,T,N,age[100],S;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
       {
        scanf("%d",&N);
        for(j=1;j<=N;j++)
           {
            scanf("%d",&age[j]);
            S=age[(N+1)/2];
           }
           printf("Case %d: %d\n",i,S);
           }
    }
    return 0;
}
