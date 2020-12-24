#include<stdio.h>
int main()
{
    int P,H,O;
    while(scanf("%d %d %d",&P,&H,&O)==3)
    {
        if((H+P)>O)
        printf("Hunters win!\n");
        else
            printf("Props win!\n");
    }
    return 0;
}
