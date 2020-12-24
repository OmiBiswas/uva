#include<stdio.h>
int main()
{
    int a,b,i,n;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&a,&b);
        if(a>b)
           printf(">\n");
        if(a<b)
            printf("<\n");
        if(a==b)
            printf("=\n");
        }
    }
    return 0;
}
