#include<iostream.h>
using namespace std;
int main()
{
int a[100],i,min,n;
cin>>n;
for(i=0;i<n;i++)
{
  cin>>a[i];
}
min=a[0];
for(i=1;i<n;i++)
{
  if(min>a[i])
  {
    min=a[i];
  }
}
cout<<"\n"<<min;
return 0;
}
