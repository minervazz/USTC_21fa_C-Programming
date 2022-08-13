#include<stdio.h>
int main()
{int  a=2,b=3,c=4;
 float x=3.5,y=4.8;
 int m,n,p,q,r;
 m=b>c&&b==c;
 n=!(a>b)&&!c||1;
 p=!(x=a)&&(y=b)&&0;
 q=!(a+b)+c-1&&b+c/2;
 r=1&&30%10>=0&&30%10<=3;
 printf("这四个数依次为：\n%d\n%d\n%d\n%d\n%d\n",m,n,p,q,r);
 return 0;
 }
  
