#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    while(scanf("%d",&n)==1)
        {
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(b>a && a>c  || b<a && a<c)
            printf("Case %d: %d\n",i,a);
            if(c>a && b>c  || a>c && c>b)
            printf("Case %d: %d\n",i,c);
            if(a>b && b>c  || a<b && b<c)
            printf("Case %d: %d\n",i,b);
     }
        }
}
