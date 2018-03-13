#include<iostream>
using namespace std;
int main()
{
int n,a[100],i,k,c=0;
cin>>n;
for(int i=0;i<n;i++)
{
  cin>>a[i];
}
cin>>k;
for(int i=0;i<n;i++)
{
if(a[i]==k)
c+=1;
}
cout<<"\n"<<c;
}
