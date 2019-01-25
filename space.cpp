#include<iostream.h>
#include<string.h>
void main()
{
int t,i=0,c=0;
char a[100];
cin.get(a,100);
t=strlen(a);
for(;i<t;i++)
if(a[i]==' ')
c++;
cout<<c;
getch();
}
