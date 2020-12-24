#include<stdio.h>
#include<math.h>
int main()
{
    long double a,b,c,s,area,r;
    while(scanf("%Lf %Lf %Lf",&a,&b,&c)==3)
    {
        if(a==0 || b==0 || c==0)
        {
            printf("The radius of the round table is: 0.000\n");
        }
        else
        {
            s=(a+b+c)/2;
            area=sqrt(s*(s-a)*(s-b)*(s-c));
            r=area/s;
            printf("The radius of the round table is: %.3Lf\n",r);
        }

    }
}
