#include<stdio.h>
#include<math.h>
int main()
{
    long long int N,X;
    while(scanf("%lld",&N)==1)
    {
       if(N==0)
        break;
       X=sqrt(N);
       if(X*X==N)
        printf("yes\n");
       else
        printf("no\n");

    }
    return 0;
    }
