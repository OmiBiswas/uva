#include<stdio.h>
int main()
{
    int M,N,i,j,x,count,a[10];
    while(scanf("%d %d",&M,&N)==2)
    {
        count=0;
        for(i=M;i<=N;i++)
        {
            for(j=0;j<=9;j++)
                a[j]=0;
                x=i;
                while(x!=0)
                {
                    if(a[x%10]==1)
                        break;
                    a[x%10]=1;
                    x=x/10;
                }
                if(x==0)
                    count++;
        }
        printf("%d\n",count);
     }
    return 0;
}
