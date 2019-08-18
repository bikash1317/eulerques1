/*


n! means n × (n − 1) × ... × 3 × 2 × 1

For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.

Find the sum of the digits in the number 100!
*/
#include<iostream.h>
#include<conio.h>
void main()
{
int p=1,sum=0,r,n=100;
while(n>0)
{
p=p*n;
n=n-1;
}
while(p>0)
{
r=p%10;
sum=sum+r;
p=p/10;
}
cout<<sum;
}
