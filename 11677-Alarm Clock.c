#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,x,y,ans;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
        x=(h1*60)+m1;
        y=(h2*60)+m2;
        if(x>y)
            ans=(1440+y)-x;
        else
            ans=y-x;
        printf("%d\n",ans);
    }
    return 0;
}
