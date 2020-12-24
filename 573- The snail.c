#include<stdio.h>
int main()
{
    double H,U,D,F,h,f;
    while(scanf("%lf %lf %lf %lf",&H,&U,&D,&F)==4)
    {
        if(H==0)
            break;
            f=(U*F)/100;
            h=0.0;
            int d=0;
            while(1)
            {
                d++;
                if(U>0)
                   {
                       h=h+U;
                   }
                    U=U-f;
                    if(h>H)
                    break;
                    h=h-D;
                    if(h<0)
                    break;
            }
            if(h>=0)
            printf("success on day %d\n",d);
            else
                printf("failure on day %d\n",d);
       }
       return 0;
}
