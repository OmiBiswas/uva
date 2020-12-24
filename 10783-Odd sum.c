#include<stdio.h>

int main()
{
    int t, s, e,sum,value,i,j;
    while(scanf("%d",&t)==1)
    {
       for(j=1;j<=t;j++)
       {
            scanf("%d%d",&s, &e);
            if(s%2==0)
                value=s+1;
            else
                value=s;
            sum=0;
            for(i=value;i<=e;i=i+2)
            {
                sum+=i;
            }
            printf("Case %d: %d\n",j,sum);
       }
    }
    return 0;
}
