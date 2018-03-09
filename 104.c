#include "stdio.h"
#include<math.h>
void main()
{
  int p,n,r=1;
  scanf("%d%d",&n,&p);
  while(p!=0)
  {
    r=n*r;
    p--;
  }
  printf("%d",r);
}
