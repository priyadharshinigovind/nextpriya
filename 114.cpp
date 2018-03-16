#include <iostream>
using namespace std;
int main()
{
int a[100],i,c=0,n,k;
cin>>n;
cin>>k;
for(i=0;i<n;i++)
{
  cin>>a[i];
}
for(i=0;i<n;i++)
{
  if(a[i]%2!=0)
  {
    c+=1;
  }
  if(c==k)
  {
    cout<<"\n"<<a[i]<<"\n";
    break;
  }
}
return 0;
}
