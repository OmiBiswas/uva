#include <stdio.h>
#include <string.h>
int main()
{
    int G[3],B[3],C[3],temp,count;

    while(scanf("%d %d %d %d %d %d %d %d %d",&B[0],&G[0],&C[0],&B[1],&G[1],&C[1],&B[2],&G[2],&C[2])==9)
    {
        char ans[4];
        count = G[0] + C[0] + B[1] + G[1] + B[2] + C[2];
        strcpy(ans,"BCG");
        temp= G[0] + C[0] + B[1] + C[1] + B[2] + G[2];
        if(temp < count)
        {
            count = temp;
            strcpy(ans,"BGC");
        }
        temp = B[0] + G[0] + C[1] + G[1] + C[2] + B[2];
        if(temp < count)
        {
            count = temp;
            strcpy(ans,"CBG");
        }
        temp = G[0] + B[0] + C[1] + B[1] + C[2] + G[2];
        if(temp < count)
        {
            count = temp;
            strcpy(ans,"CGB");
        }
        temp = B[0] + C[0] + G[1] + C[1] + B[2] + G[2];
        if(temp < count)
        {
            count = temp;
            strcpy(ans,"GBC");
        }
        temp = C[0] + B[0] + G[1] + B[1] + G[2] + C[2];
        if(temp < count)
        {
            count = temp;
            strcpy(ans,"GCB");
        }
        printf("%s %d\n",ans,count);
    }
    return 0;
}

