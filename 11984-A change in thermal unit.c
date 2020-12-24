#include<stdio.h>
int main()
{
    int i,T;
    float d,C,F,R;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%f %f",&C,&d);
            F=9*C/5+d;
            R=F*5/9;
            printf("Case %d: %.2f\n",i,R);
        }
    }
    return 0;
}
