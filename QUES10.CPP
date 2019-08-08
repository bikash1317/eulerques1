

/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/
#include<iostream.h>
#include<conio.h>
void main()
{
int i , j;
long c=0, sum=0;
for(i=0;i<10;i++)
{
for(j=0;j<=i;j++)
{
c=0;
if(i%j==0)
{
c=c+1;
}
if(c==2)
{
sum=sum+i;
}
}
}
cout<<sum;
}
