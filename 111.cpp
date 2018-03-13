#include<iostream>
using namespace std;
int main()
{
int n,r,c=0;
cin>>n;
while(n!=0)
{
  r=n%10;
  c+=1;
  n/=10;
}
cout<<"\n"<<c;
}
