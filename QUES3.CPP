/* 

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
# include< iostream.h>
void main ()
{
int mp,c=0,n,i;
for(n=3;n<600851475143;n=n+2)
{
c=0;
if(600851475143%n==0)
{
for(i=1;i<=n;i++)
{
if(n%i==0)
c=c+1;
}
if (c==2)
mp=n;
}
}
cout<<mp;
}
