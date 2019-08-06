#include<iostream.h>
#include<conio.h>
void main()
{
int i , sos=0 , ss=0 , diff=0 , sss=0;
clrscr();

for(i=1;i<=100;i++)
{
sos=sos+(i*i);
ss=ss+i;
}
sss=ss*ss;
diff=sss-sos;
cout<<diff;
}
