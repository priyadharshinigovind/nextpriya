#include "stdio.h"
#include<string.h>
void main()
{
  char s[100];
  int i;
  printf("\nEnter a sentence");
  scanf("%[^\n]",s);
  s[0]=s[0]-32;
  for(i=1;s[i]!='\0';i++)
  {
    if(s[i]==' ')
    {
      s[i+1]=s[i+1]-32;
    }
  }
  printf("%s",s);
}
