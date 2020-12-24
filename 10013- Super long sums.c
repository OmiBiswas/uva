#include <stdio.h>
long long int c[1000001];//(this code must be submit in c++)
int main ()
{
  long long int N, M, a, b,k,i;
  while(scanf("%lld", &N)==1)
    {

  for (k = 0; k < N; k++) {
    if (k > 0) printf("\n");

    scanf("%lld", &M);
    for (int i = 0; i < M; i++) {
      scanf("%lld %lld", &a, &b);
      c[i] = a + b;
    }
    for (i = M - 1; i > 0; i--) {
      if (c[i] >= 10) {
        c[i - 1] += c[i] / 10;
        c[i] %= 10;
      }
    }
    for (i = 0; i < M; i++) {
      printf("%lld", c[i]);
    }
    printf("\n");
  }
  }
  return 0;
}
