#include<stdio.h>
#include<math.h>
#define pi 2*acos(0)
int main()
{
    int N,D,L,i;
    double x,y,area;
    while(scanf("%d",&N)==1)
    {
        for(i=1;i<=N;i++)
        {
            scanf("%d %d",&D,&L);
            x=L/2.0;
            y=sqrt(((L/2.0)*(L/2.0))-((D/2.0)*(D/2.0)));
            area=pi*x*y;
            printf("%.3lf\n",area);
        }
    }
    return 0;
}
 
