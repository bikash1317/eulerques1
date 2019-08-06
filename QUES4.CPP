#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,p,n,c,x,q,pmax;
for(i=999;i>=100;i--)
{
for(j=i;j>=100:j--)
{
p=i*j;
n=p;
c=0;
while(n>0)
{
x=n%10;
c=c*10+x;
n/=10;
}
q=p;
if(c==p)
{
if(pmax<p)
{
pmax=p;
}
}
}
}
cout<<pmax;
}


