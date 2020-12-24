#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,n,x;
    char word[21];
    while(scanf("%s",&word)==1)
    {
        int sum=0;
        n=strlen(word);
        for(i=0;i<n;i++)
        {
            for(j=97;j<=122;j++)
                if(word[i]==j)
                    sum=sum+(j-96);
                for(j=65;j<=90;j++)
                    if(word[i]==j)
                     sum=sum+(j-38);
                }
        x=sum/2;
        for(k=2;k<=x;k++)
               if(sum%k==0)
                break;
                  if(n==1 && word[0]=='a')
                    printf("It is a prime word.\n");
                    else if(k==x+1)
                         printf("It is a prime word.\n");
                    else
                        printf("It is not a prime word.\n");

    }
    return 0;
}

