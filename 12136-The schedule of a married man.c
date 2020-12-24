#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,h3,m3,h4,m4,T,i;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
            scanf("%d:%d %d:%d",&h3,&m3,&h4,&m4);
            h1=h1*60+m1;h2=h2*60+m2;
            h3=h3*60+m3;h4=h4*60+m4;
            if(h2<h3 || h1>h4)
                printf("Case %d: Hits Meeting\n",i);
            else
                printf("Case %d: Mrs Meeting\n",i);

        }
    }
    return 0;
}
