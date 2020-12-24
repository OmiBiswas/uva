#include<stdio.h>
int main()
{
    int h,m,T,i;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%d:%d",&h,&m);
            if(h==12 && m==0)
                printf("%02d:%02d\n",h,m);
            else if(m==0)
            {
                h=12-h;
                 printf("%02d:%02d\n",h,m);
            }
            else
            {
                m=60-m;
                h=23-h;
                if(h>12)
                {
                    h=h-12;
                }
                 printf("%02d:%02d\n",h,m);
            }

        }
    }
    return 0;
}
