#include<stdio.h>
int main()
{
    int T,a,b,i,x,y;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%d %d",&a,&b);
            if(a<b)
                printf("impossible\n");
            else
            {
                x=(a+b)/2;
                y=(a-b)/2;
                if((x+y==a)&&(x-y==b))
                printf("%d %d\n",x,y);
                else
                printf("impossible\n");
            }
        }
    }
    return 0;
}

