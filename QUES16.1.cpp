/*

215 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 21000?
*/
#include<iostream.h>
#include<cono.h>
void main()
{
int i,p=1;
int a[1000];
for (i=1;i<=1000;i++)
{
p=p*2;
}
int r,j;
for(j=0;j<1000;j++)
{
r=p%10;
a[j]=r;
p=p/10;
}
int sum=0 ,k;
for(k=0;k<1000;k++)
{
sum=sum+a[k];
}
cout<<sum;
}
