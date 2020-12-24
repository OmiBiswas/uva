#include<stdio.h>
#include<math.h>
int main()
{
long N,i,j,count,flag,a,b,p,q,sum;
while(scanf("%ld",&N)==1 && N>=6 && N<1000000 )
{
if(N==0)
break;
sum=1;
for(i=3;i<=N;i++)
    {
    count=1;
    flag=1;
    a=i;
    b=N-i;
    if(a>b)
     break;
    if(a%2==1)
        {
        p=sqrt(a);
        for(j=3;j<=p;j+=2)
            {
            if(a%j==0)
                {
                count=0;
                break;
                }
            }
        if(count==1)
            {
            if(b%2==1)
                {
                q=sqrt(b);
                for(j=3;j<=q;j++)
                    {
                    if(b%j==0)
                        {
                        flag=0;
                        break;
                        }
                    }
                if(flag==1)
                    {
                    printf("%ld = %ld + %ld\n",N,a,b);
                    sum=0;
                    break;
                    }
                }
            }
        }
    }
if(sum==1)
printf("Goldbach's conjecture is wrong.\n");
}
return 0;
}
