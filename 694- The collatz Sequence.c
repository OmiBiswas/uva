#include<stdio.h>
int main()
{
    long int A,L,i,j=1,temp;
    while(scanf("%ld %ld",&A,&L)==2)
    {
        if(A<0 && L<0)
            break;
            temp=A;
            for(i=1;i!=0;i++)
            {
                if(A==1)
                    break;
                if(A%2==0)
                    A=A/2;
                else
                    A=(A*3)+1;
                    if(A>L)
                    break;
            }
    printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n",j,temp,L,i);
    j++;
    }
    return 0;
}
