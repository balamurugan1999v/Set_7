#include<iostream.h>
#include<conio.h>
void main()
{
int n,c=0;
for(int i=1;i<=n;i++)
{
if((n%i)==0)
c=c+1;
}
if(c==2)
cout<<"yes";
else
cout<<"no";
getch();
}
