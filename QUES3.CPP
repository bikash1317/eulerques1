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
