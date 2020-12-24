#include<iostream>
using namespace std;
int main()
{
    int T,N,c,i,j,s;
    while((cin>>T)==1)
    {
        for(i=1;i<=T;i++)
        {
           s=0;
           cin>>N;
           for(j=1;j<=N;j++)
            {
                cin>>c;
                if(s<c)
                    s=c;
            }
            cout<<"Case "<<i<<": "<<s<<endl;
           }
           }
           return 0;
}
