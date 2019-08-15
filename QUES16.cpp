/*

2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?
*/

#include<iostream.h>
#include<cono.h>
#include<math.h>
void main()
{
 int number=pow(2,1000);
int result=0;
while(number>0)
{
result = result +(int) (number % 10);
number=number/10;
}
cout << result;
}
