/*

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
# include<iostream.h>
#include<conio.h>
void main()
{
long n=600851475143;
int i,j,c,Pf=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c=0;
for(j=3;j<i;j++)
{
if (i%j==0)
c=c+1;
}
if(c==0)
{
Pf=i;
}
}
}
cout<<Pf;
}
