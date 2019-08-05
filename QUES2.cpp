# include<iostream.h>
# include <conio.h>
void main()
{
  int a=0,b=1,c=0,sum=0,i,n;
  cout<<"enter the number to be inputed";
  cin>>n;
  for(i=0,i<n;i++)
  {
    c=a+b;
    a=b;
    b=c;
    if(c%2==0)
      sum=sum+c;
  }
}
