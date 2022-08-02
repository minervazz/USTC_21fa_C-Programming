#include<stdio.h>
 int main()
 {int a=2,b=3,c=4;
  float x=3.5,y=4.2;
  float m,n,p,q;
  m=3.5+1/2+56%10;
  n=a++*1/3;
  p=x+a%3*(int)(x+y)%2/4;
  q=(float)(a+b)/2+(int)x%(int)y;
  printf("这四个数依次为：\n%f\n%f\n%f\n%f\n",m,n,p,q);
  return 0;
 }
 
