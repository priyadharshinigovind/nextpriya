#include <iostream>
using namespace std;
int main()
{
int a[100],i,j,n,temp;
cin>>n;
for(i=0;i<n;i++)
{
  cin>>a[i];
}
for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
  {
  if(a[i]>a[j])
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
  }
}
}
cout<<"\n"<<a[1];
return 0;
}
