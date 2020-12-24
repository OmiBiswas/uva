#include<stdio.h>
#include<string.h>
int main()
{
    char array[10000];
    int len,i,count,flag;
    while(scanf("%[^\n]",array)==1)
    {
        len=strlen(array);
        for(i=0,count=0,flag=0;i<len;i++)
        {
            if(isalpha(array[i]))
                count++;
            else
                count=0;
            if(count==1)
                flag++;
        }
        printf("%d\n",flag);
        gets(array);
    }
     return 0;
}

