/*

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

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


