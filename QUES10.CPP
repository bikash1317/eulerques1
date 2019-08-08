

/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/
#include<iostream.h>
#include<conio.h>
void main()
{
int i , j;
long c=0, sum=2;
for(i=3;i<10;i=i+2)
{
for(j=3;j<=i/2;j=j+2)
{
c=0;
if(i%j==0)
{
c=1;
break;
}
if(c==0)
{
sum=sum+i;
}
}
}
cout<<sum;
}
