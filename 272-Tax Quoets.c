#include<stdio.h>
int main()
{
    char s;
    int flag=0;
    while(scanf("%c",&s)==1)
    {
        if(s=='"')
        {
            flag++;
            if(flag%2==1)
                printf("``");
            else
                printf("''");
        }
        else
            printf("%c",s);
    }
    return 0;
}
