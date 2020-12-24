#include<stdio.h>
#include<string.h>
int main()
{
    char a[250],b[250];
    int i,j,l1,l2,T,x;
    scanf("%d",&T);
    while(T--)
    {
          scanf("%s %s",a,b);
          l1=strlen(a);
          l2=strlen(b);
          int c[300]={};
          x=(l1>l2)?l1:l2;
          for(i=0;i<l1;i++)
            c[i]+=a[i]-'0';
          for(i=0;i<l2;i++)
              c[i]+=b[i]-'0';
          for(j=0;j<=x;j++)
          {
             c[j+1]+=c[j]/10;
             c[j]%=10;
          }
          for(j=x+1;j>=0;j--)
           {
               if(c[j])
                break;
            }
                if(j<0)
                    j++;
                i=0;
                while(c[i]==0)
                i++;
                while(i<=j)
                    printf("%d",c[i++]);
                    printf("\n");
         }
         return 0;

}

