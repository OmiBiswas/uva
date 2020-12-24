#include <stdio.h>
#include<string.h>
#include<ctype.h>

int cycleLength(int n);

int main()
{
    int n,x, a,b,ans,u,v;
    while(scanf("%d %d", &a, &b)==2){

        if(a>b){
            u=b;
            v=a;
        }
        else{
            u=a;
            v=b;
        }
        ans=0;
        for(n=u; n<=v; n++){
            x = cycleLength( n );
            if( x > ans )
                ans = x;
        }
        printf("%d %d %d\n", a,b, ans);
    }
    return 0;
}


int cycleLength( int n )
{
    int CL=1;
    while( n !=1 )
    {
        if(n%2==1)
            n = 3*n +1;
        else
            n/=2;  /// n= n/2
        CL++;
    }
    return CL;
}


