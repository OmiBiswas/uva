#include<stdio.h>
int main()
{
    int N,M,x,i,j;
    while(scanf("%d %d",&N,&M)==2)
    {
        int count=0,sum=0;
        for(i=1;i<=N;i++)
        {
            for(j=1;j<=M;j++)
            {
                scanf("%d",&x);
                if(x<=0)
                 count=1;
            }
            if(count==0)
                sum++;
                count=0;
        }
        printf("%d\n",sum);
    }
    return 0;
}
