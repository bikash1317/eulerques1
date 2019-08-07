#include<iostream.h>
#include<conio.h>
void main()
{
int i,b,c,a,j;
for(i=1;i<=1000;i++)
{
for(j=1;j<=1000;j++)
{
c=1000-(b+a);
if((c*c)==(b*b)+(a*a))
break;
}
cout<<a*b*c;
}
}
