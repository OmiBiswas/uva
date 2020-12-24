#include<stdio.h>
int main()
{
    int T,e,f,c,i,sum,ans,x;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%d %d %d",&e,&f,&c);
            x=0;sum=e+f;
            while(sum>=c)
            {
                ans=sum/c;
                x=x+ans;
                sum=(sum%c)+ans;
            }
            printf("%d\n",x);
        }
            }
            return 0;
}
