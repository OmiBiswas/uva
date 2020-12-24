#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long int N,sum,i,l;
    char array[200];
    while(scanf("%s",array)==1)
    {
        l=strlen(array);
        sum=0;
        for(i=0;i<l;i++)
        {
           N=array[i]-'0';
           sum+=(N*(pow(2,l-i)-1));
        }
        if(sum==0)
            break;
        printf("%lld\n",sum);
    }
    return 0;
}
