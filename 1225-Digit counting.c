#include<stdio.h>
int main()
{
    int T,N,i,j,x,k;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        int array[20]={0};
        scanf("%d",&N);
        for(j=1;j<=N;j++)
        {
            x=j;
            while(x!=0)
            {
                k=x%10;
                array[k]++;
                x=x/10;
            }
        }
        for(j=0;j<9;j++)
            printf("%d ",array[j]);
        printf("%d\n",array[9]);
        }
    return 0;
}
