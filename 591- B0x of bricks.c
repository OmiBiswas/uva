#include<stdio.h>
int main()
{
    int a[102],N,i,sum=0,count=1,total;
    while(scanf("%d",&N)==1)
    {
        if(N==0)
        break;
        sum=0;
        for(i=1;i<=N;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        total=sum/N;
        int k=0;
        for(i=1;i<=N;i++)
        {
            if(a[i]>total)
             k=k+(a[i]-total);
        }
        printf("Set #%d\n",count++);
        printf("The minimum number of moves is %d.\n\n",k);
     }
     return 0;
}
