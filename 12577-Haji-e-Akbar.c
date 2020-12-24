#include<stdio.h>
#include<string.h>
int main()
{
    int i=1;
    char s[10];
    while(1)
    {
        scanf("%s",s);
        if(s[0]=='*')
        break;
        if(strcmp(s,"Hajj")==0)
        printf("Case %d: Hajj-e-Akbar\n",i++);
        else if(strcmp(s,"Umrah")==0)
        printf("Case %d: Hajj-e-Asghar\n",i++);
    }
    i++;
    return 0;
}
