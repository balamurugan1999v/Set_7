#include<iostream.h>
int main()
{
int n,a=1,b=1,c;
cin>>n;
for(int i=0;i<n;i++)
{
cout<<a<<" ";
c=a+b;
a=b;
b=c;
}
return 0;
}
