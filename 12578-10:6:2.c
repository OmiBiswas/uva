#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    int T,i;
    double l,w,r,arc,arr;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%lf",&l);
            r=l/5;
            w=(l*6)/10;
            arc=PI*r*r;
            arr=(l*w)-arc;
            printf("%.2lf %.2lf\n",arc,arr);

        }
    }
    return 0;
}

