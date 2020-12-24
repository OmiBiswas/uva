#include<stdio.h>
int main()
{
    int l[1002],i,j,n,s;
    while(scanf("%d",&n)==1)
    {
            for(i=0;i<n;i++)
            scanf("%d",&l[i]);
            s=0;
            for(i=0;i<n;i++)
             {
                 for(j=i+1;j<n;j++)
             {
                if(l[i]>l[j])
                s++;
             }
             }
          printf("Minimum exchange operations : %d\n",s);
       }

       return 0;
    }

