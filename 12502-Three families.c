#include<stdio.h>
int main()
{
    int x,y,z,R,T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        R=z*(2*x-y)/(x+y);
        printf("%d\n",R);
    }
    return 0;
}
