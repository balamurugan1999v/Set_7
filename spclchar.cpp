#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
int t,i,c=0,d=0;
char a[100];
cin.get(a,100);
t=strlen(a);
for(i=0;i<t;i++)
if((a[i]>='0')&&(a[i]<='9')&&(a[i]>='A')&&(a[i]<'z'))
c++;
else
d++
cout<<d;
getch();
}
