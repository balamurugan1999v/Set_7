import java.util.*;
class minimum
{
public static void main(String args)
{
Scanner s=new Scanner(System.in);
int i,n=10,c,j;
int a[]=new int[10];
for(i=0;i<n;i++)
{
a[i]=s.nextInt();
}
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
System.out.println(a[0]);
}
}

