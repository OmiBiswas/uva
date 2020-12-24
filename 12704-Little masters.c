#include<stdio.h>
int main()
{
    int T,x,y,r,i;
    double s,q,t;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
       {
        scanf("%d %d %d",&x,&y,&r);
        s=sqrt(x*x+y*y);
        q=r-s;
        t=r+s;
        printf("%.2lf %.2lf\n",q,t);
       }
    }
}
