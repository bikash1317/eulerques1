/*

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/
#include<iostream.h>
#include<conio.h>

int prime[100000]={0};


bool prime(int n )
{
int i , cnt=1;
for (i=1;i<n;i++)
{
if(n%i==0)
{
cnt = cnt + 1 ;
}
}
if(cnt == 2)
{ 
return(true);
}
}
 void main()
{

int i=2,m=0;
while(m<=6)
{
if (prime(i))
{
m=m+1;
if (m==6)
{
cout<<i;
}
}
i=i+1;
}
 }
