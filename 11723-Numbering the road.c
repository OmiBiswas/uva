#include<stdio.h>
int main()
{
    int R,N,i=0;
    while(scanf("%d %d",&R,&N)==2)
    {
        i++;
        if(R==0 && N==0)
            break;
            int n=(R-1)/N;
        if(n>26)
            printf("Case %d: impossible\n",i);
        else
            printf("Case %d: %d\n",i,n);

    }
}
