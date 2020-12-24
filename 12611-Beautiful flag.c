#include<stdio.h>
int main()
{
    int T,len,wid,right,left,r,i;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%d",&r);
            len=r*5;
            wid=0.6*len;
            wid=wid/2;
            right=0.45*len;
            left=0.55*len;
            printf("Case %d:\n",i);
            printf("%d %d\n",-right,wid);
            printf("%d %d\n",left,wid);
            printf("%d %d\n",left,-wid);
            printf("%d %d\n",-right,-wid);

        }
    }
    return 0;
}
