#include<stdio.h>
int main()
{
    int t,N,i,j,B,T,W,A;//(C++)
    char s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&N);
        getchar();
        int B=T=A=W=0;
        for(j=0;j<N;j++)
        {
            scanf("%c",&s);
            if(s=='W')W++;
            else if(s=='B')B++;
            else if(s=='T')T++;
            else if(s=='A')A++;
        }
        if(B==N || (B+A)==N && N!=A)
        printf("Case %d: BANGLAWASH\n",i);
        else if(W==N || (W+A)==N && N!=A)
        printf("Case %d: WHITEWASH\n",i);
        else if(B==W && N!=A)
            printf("Case %d: DRAW %d %d\n",i,W,T);
        else if(B>W)
        printf("Case %d: BANGLADESH %d - %d\n",i,B,W);
        else if(B<W)
        printf("Case %d: WWW %d - %d\n",i,W,B);
        else if(A==N)
        printf("Case %d: ABANDONED\n",i);

    }
}


