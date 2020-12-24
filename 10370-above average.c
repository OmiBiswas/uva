#include<stdio.h>
int main()
{
    int C[1000],N,T,i;
   double avg,above;
    while(scanf("%d",&T)==1)
    {
        for(i=0;i<T;i++)
        {
        int sum=0;
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
           scanf("%d",&C[i]);
           sum=sum+C[i];
        }
        avg=sum/N;
        double j=0;
        for(i=0;i<N;i++)
        {
            if(avg<C[i]);
             {
               j=j+1;
               }
        }
        above=(100*j/N);
        printf("%.3lf%%\n",above);
    }
    }
    return 0;
}


