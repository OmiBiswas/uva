#include<stdio.h>
int main()
{
    int a,b,res;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==-1 && b==-1)
            break;
            if(a>b)
              res=a-b;
            else
              res=b-a;
            if(res>=50)
                res=100-res;
            printf("%d\n",res);
}
return 0;
}
