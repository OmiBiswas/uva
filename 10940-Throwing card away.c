#include<stdio.h>
int main()
{
    long int N,x,y,card;
    while(scanf("%ld",&N)==1)
    {
        if(N==0)
            break;
        x=1;
        while(x<=N)
        {
            x=x*2;
        }
        y=x%N;
        card=N-y;
        printf("%ld\n",card);
    }
    return 0;
}
