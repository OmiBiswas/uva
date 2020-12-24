#include <stdio.h>
#define max 2000005
long long int A[max],B[max],C[max];
void Counting_sort(long long int A[], long long int K, long long int n);
int main()
 {
    long long int n,i,k=0;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)break;
        for (i=1;i<=n;i++)
        {
          scanf("%lld",&A[i]);
           if(A[i] > k) k = A[i];
        }
        Counting_sort(A, k, n);
    }
    return 0;
 }
 void Counting_sort(long long int A[], long long int k, long long int n)
{
 long long int i, j;
 for(i = 0; i <= k; i++)
 C[i] = 0;
 for(j =1; j <= n; j++)
 C[A[j]] = C[A[j]] + 1;
 for(i = 1; i <= k; i++)
 C[i] = C[i] + C[i-1];
 for(j = n; j >= 1; j--)
 {
    B[C[A[j]]] = A[j];
    C[A[j]] = C[A[j]] - 1;
 }
   for(i=1;i<n;i++)
   printf("%lld ",B[i]);
   printf("%lld\n",B[n]);
}
