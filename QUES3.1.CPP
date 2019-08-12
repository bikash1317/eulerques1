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
