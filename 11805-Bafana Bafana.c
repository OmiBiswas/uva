#include<stdio.h>
int main()
{
    int N,K,P,i,T,S;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
           {
            scanf("%d %d %d",&N,&K,&P);
            S=(((K-1)+P)%N)+1;
            printf("Case %d: %d\n",i,S);
    }
}
return 0;}
