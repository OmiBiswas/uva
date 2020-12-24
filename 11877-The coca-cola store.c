#include<stdio.h>
int main()
{
    int n,R;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        if(n%2==0)
            R=n/2;
        else
            R=(n-1)/2;
        printf("%d\n",R);
    }
    return 0;
}
