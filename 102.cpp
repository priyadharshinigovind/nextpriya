#include<iostream>
using namespace std;
int main()
{
int n,i;
cin>>n;

while(n%2==0)
{
i=n/2;
cout<<i<<"\n";
n=i;
}
return 0;
}
