#include<stdio.h>
int main()
{
    long int N,R,S;
    while(scanf("%ld",&N)==1)
    {
        R=((N/2)+1);
        S=((R*R)*6)-9;
        printf("%ld\n",S);
    }
    return 0;
}
