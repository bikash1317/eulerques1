

//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

//Find the sum of all the multiples of 3 or 5 below 1000.

# include <iosteream.h>
#include <conio.h>
void main ()
{
int n,i=0,c=0;
cout<< "enter any positive integer number '\n'";
for(i=0;i<1000;i++)
{
if(i%3==0 || i%5==0 )
{
  c=c+i;
}
}
  cout<<"the sum of all the multiples of 3 and 5 are = "<< c;
}
