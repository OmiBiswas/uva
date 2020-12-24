#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    double s,a,rad,res,deg;
    char array[5];
    while(scanf("%lf %lf %s",&s,&a,array)==3)
    {
        if(array[0]=='m')
        a=a/60;
        if(a>180)
        a=360-a;
        a=PI*a/180;
        rad=6440+s;
        res=a*rad;
        deg=2*rad*sin(a/2);
        printf("%.6lf %.6lf\n",res,deg);
        }
        return 0;
}
