#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,R,i,a[10000],j;
    while(scanf("%d %d",&N,&R)==2)
    {
        for(i=1;i<=R;i++)
        {
            scanf("%d",&j);
            a[j]=1;
        }
        if(N==R)
            printf("*");
        else
        {
            for(i=1;i<=N;i++)
            {
                if(a[i]==0)
                    printf("%d ",i);
            }
        }
        printf("\n");
        memset(a,0,strlen(a));
 }
 return 0;
}
