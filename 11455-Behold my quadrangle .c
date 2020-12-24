#include<stdio.h>
int main()
{
  int a,b,c,d,n,i;
  while(scanf("%d",&n)==1)
  {
    for(i=0;i<n;i++)
      {
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==b && b==c && c==d && d==a)
    printf("square\n");
    else if((a==b && c==d) || (a==c && b==d) || (a==d && b==c))
    printf("rectangle\n");
    else if((a<=b+c+d) && (b<=a+c+d) && (c<=a+b+d) && (d<=a+b+c))
    printf("quadrangle\n");
    else
    printf("banana\n");
  }
}
return 0;
}
