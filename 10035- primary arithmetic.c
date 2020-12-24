#include<stdio.h>
int main()
{
    int a,b,sum;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(a==0 && b==0)
            break;
            int carry=0;
            int count=0;

            while(1)
            {
                if(a==0 && b==0)
                    break;
                sum=(a%10 + b%10 +carry);
                a=a/10;
                b=b/10;
                if(sum>=10)
                {
                    count++;
                    carry=1;
                }
                else
                    carry=0;
           }
           if(count==0)
            printf("No carry operation.\n");
           else if(count==1)
            printf("1 carry operation.\n");
           else
            printf("%d carry operations.\n",count);
            }
           return 0;
}
