#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    int l,w,h,o;
    double d,v;
    while(scanf("%d %d %d %d",&l,&w,&h,&o)==4)
    {
        d=l*tan(o*PI/180);
        if(d>h)
            v=0.5*h*h*l*w/d;
        else
            v=l*w*(h-(d*0.5));
        printf("%.3lf mL\n",v);
   }
   return 0;
}
