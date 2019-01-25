#include<iostream.h>
int main()
{
int a[100],t,n=10;
for(int i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
for(int j=i;j<n;j++)
{
if(a[i]<a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
cout<<a[n-1];
return 0;
}
