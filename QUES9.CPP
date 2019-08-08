/*

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a2 + b2 = c2

For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
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
