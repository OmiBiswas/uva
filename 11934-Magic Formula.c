#include<stdio.h>
int main()
{
    int a,b,c,d,L,F,R,i,x;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&L)==5)
    {
         R=0;
        if(a==0 && b==0 && c==0 && d==0 && L==0)
            break;
        for(i=0;i<=L;i++)
        {
            x=i;
            F=(a*x*x)+b*x+c;
            if(F%d==0)
            R++;
            }
            printf("%d\n",R);
            }
            return 0;
}
