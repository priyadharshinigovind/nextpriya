#include<stdio.h>
#include<string.h>
int main()
{
  int i,n,p=1;
  int s;
  scanf("%d",&s);
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    p=p*10;
  }
  printf("%d",s%p);
  return 0;
}
