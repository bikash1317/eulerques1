/*
The Fibonacci sequence is defined by the recurrence relation:

    Fn = Fn−1 + Fn−2, where F1 = 1 and F2 = 1.

Hence the first 12 terms will be:

    F1 = 1
    F2 = 1
    F3 = 2
    F4 = 3
    F5 = 5
    F6 = 8
    F7 = 13
    F8 = 21
    F9 = 34
    F10 = 55
    F11 = 89
    F12 = 144

The 12th term, F12, is the first term to contain three digits.

What is the index of the first term in the Fibonacci sequence to contain 1000 digits?
*/
#include<iostream.h>
#include<conio.h>
void main()
{

int cnt=0,r;
int a=1,b=1,c=0,t=2;
while(cnt<3)
{

c=a+b;
t=t+1;
a=b;
b=c;
int r=0,sum=0;
int p=c;
while(p>0)
{
r=p%10;
sum=sum+1;
r=r/10;
}
cnt=sum;
}
cout<<t;
}
