#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,R,i,S;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
            R=0;
            for(i=a;i<=b;i++)
            {
              S=sqrt(i);
              if(i==S*S)
                    R++;
            }
            printf("%d\n",R);
    }
    return 0;
}
