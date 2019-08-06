#include <iostream.h>
#include<conio.h>

void main() {
	 int a=0,b=1,c=0,sum=0,n;
  for(c=0;c<4000000;)
  {
    c=a+b;
    a=b;
    b=c;
    if(c%2==0)
      sum=sum+c;
  }
cout<<sum;
	
}
