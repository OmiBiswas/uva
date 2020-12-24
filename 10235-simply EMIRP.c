#include<stdio.h>
#include<math.h>
int main()
{
long n,b,i,temp,c,d,num,rev,temp2;
while(scanf("%ld",&n)==1)
{
num=n;temp=0;rev=0;temp2=0;
if(n==2)
    {
    printf("%ld is prime.\n",n);
    continue;
    }
b=sqrt(n);
for (i=2;i<=b;i++)
if (n%i==0)
{
printf("%ld is not prime.\n",n);
temp=1; break;
}
if(temp==0)
    {
    for(i=1;i!=0;i++)
        {
        d=num%10;num=num/10;rev=rev*10+d;
        if(num==0)break;
        }
    if(rev==n)
        {
        printf("%ld is prime.\n",n);continue;
        }
    c=sqrt(rev);
    for (i=2;i<=c;i++)
        if (rev%i==0)
            {
            printf("%ld is prime.\n",n);temp2=1; break;
            }
    if(temp2==0)printf("%ld is emirp.\n",n);
}
}
return 0;
}





