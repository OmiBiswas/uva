#include<stdio.h>

int main()
{
    int T,n,array[60],i,j,k,h,l;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%d",&n);
            h=0;
            l=0;
            for(j=1;j<=n;j++)
                scanf("%d",&array[j]);
            for(k=1;k<n;k++)
            {
                if(array[k+1]>array[k])
                    h++;
                else if(array[k+1]<array[k])
                    l++;
                else if(array[k+1]==array[k])
                    continue;
            }
            printf("Case %d: %d %d\n",i,h,l);
        }
    }
    return 0;
}
