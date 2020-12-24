#include<stdio.h>
#include<stdio.h>
int main()
{
    int n,i=1;
    float u,v,s,a,t;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        if(n==1)
        {
            scanf("%f %f %f",&u,&v,&t);
            s=((u+v)/2)*t;
            a=(v-u)/t;
            printf("Case %d: %.3f %.3f\n",i,s,a);
            }
            if(n==2)
        {
            scanf("%f %f %f",&u,&v,&a);
            t=(v-u)/a;
            s=(u*t)+(.5*a*t*t);
            printf("Case %d: %.3f %.3f\n",i,s,t);
            }
            if(n==3)
        {
            scanf("%f %f %f",&u,&a,&s);
            v=sqrt((u*u)+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n",i,v,t);
            }
            if(n==4)
            {
            scanf("%f %f %f",&v,&a,&s);
            u=sqrt((v*v)-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n",i,u,t);
            }
            i++;
    }
    return 0;
}
