#include<stdio.h>
int main()
{
    int l,w,x0,y0,x1,y1,cx,cy,r,T,i;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%d %d %d %d %d %d %d",&x0,&y0,&x1,&y1,&cx,&cy,&r);
          l=x1-x0;
          w=y1-y0;
        if((l*3==w*5)&&(20*(cx-x0)==9*l)&&(2*(cy-y0)==w)&&(l==5*r))
             printf("Yes\n");
         else
            printf("No\n");
        }
    }
    return 0;
}
