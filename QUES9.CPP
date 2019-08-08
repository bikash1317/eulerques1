#include<iostream.h>
#include<conio.h>
void main()
{
int i,c=0,j;
for(i=1;i<1000;i++)
{
for(j=i+1;j<1000;j++)
{
c=1000-i-j;
if((c*c)==(i*i)+(j*j))
{
  cout<<(i*j*c);
break;
}
}
}
}
