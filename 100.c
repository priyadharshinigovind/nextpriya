#include "stdio.h"
void main()
{
  int n,r,pr=1;
  scanf("%d",&n);
  while(n!=0)
  {
  r=n%10;
  pr=pr*r;
  n/=10;
  }
  printf("%d",pr);
}
