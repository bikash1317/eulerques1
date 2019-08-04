# include <iosteream.h>
#include <conio.h>
void main ()
{
int n,i=0,c=0;
cout<< "enter any positive integer number";
cin>>n;
for(i=0;i>n;i++)
{
if(n%3==0 || n%5==0 )
{
cout<<n<<" ";
  c=c+n;
}
}
  cout<<"the sum of all the multiples of 3 and 5 are = "<< c;
}
