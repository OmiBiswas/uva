#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,area;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2.0;
        area=s*(s-a)*(s-b)*(s-c);
        if(s<=0 || area<=0)
            printf("-1.000\n");
            else
                printf("%.3lf\n",(4/3.0)*sqrt(area));
    }
    return 0;
}
