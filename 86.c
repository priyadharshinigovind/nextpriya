#include<stdio.h>
#include<string.h>
int main()
{
  int i,flag=0;
  char s[100];
  scanf("%s",s);
  for(i=0;i<strlen(s);i++)
  {
    if(s[i]==s[i+1])
    {
      flag=1;
      break;
    }
  }
  if(flag==1)
  printf("\nNo");
  else
  {
    printf("Yes");
  }
  return 0;
}
