#include<iostream.h>
#include<string.h>
void main()
{
int t,i,c=0;
char a[100];
cin.get(a,100);
t=strlen(a);
for(i=0;i<t;i++)
{
if(a[i]==' ')
c++;
}
cout<<t-c;
getch();
}
