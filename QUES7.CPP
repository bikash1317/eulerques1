/*

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/
#include<iostream.h>
#include<conio.h>
void main()
{
int i, c,p;
int n=1;
while(true)
{
for(i=0;i<n; i++)
{
if(n%i==0)
c=c+1;
}
if(c==2)
p=p+1;
if (p==10001)
break; 
n=n+1;
}
cout<<n;
}
