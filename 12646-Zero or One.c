#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if(a==b && b==c)
            printf("*\n");
        if(a!=b && b==c)
            printf("A\n");
        if(a!=b && a==c)
            printf("B\n");
        if(a==b && a!=c)
            printf("C\n");
    }
    return 0;

}
