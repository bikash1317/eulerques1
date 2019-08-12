/* 

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include<iostream.h>
#include<conio.h>
void main ()
{
long n=600851475143 ;
int i=2;

while(n>i)
{
if(n%i==0)
n=n/i;
else 
i=i+1;
}
cout<<i;
}
