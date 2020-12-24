#include<stdio.h>
int main()
{
    int l[60],i,j,k,T,n,s;
    while(scanf("%d",&T)==1)
    {
        for(k=1;k<=T;k++)
        {
            int s=0;
            scanf("%d",&n);
            for(i=0;i<n;i++)
            scanf("%d",&l[i]);
            for(i=0;i<n-1;i++)
             {
                 for(j=i+1;j<n;j++)
             {
                if(l[i]>l[j])
                s++;
             }
             }
          printf("Optimal train swapping takes %d swaps.\n",s);
       }
    }

       return 0;
    }
