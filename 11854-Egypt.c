#include<stdio.h>
int main()
{
    int i,a,b,c,n;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
            if(a==0 && b==0 && c==0)
                break;
            else if((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a))
                printf("right\n");
            else
                printf("wrong\n");
    }
    return 0;
}
