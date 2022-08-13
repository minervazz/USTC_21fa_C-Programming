#include<stdio.h>
#include<math.h>
int main()
{double x,y; 
printf("输入自变量：") ; 
scanf("%lf",&x);
if(x<0&&x!=-3)
	y=x*x+x-6; 
else if(x<10&&x>=0&x!=2&&x!=-3)
	y=x*x-5*x+6;
else y=x*x-x-1;
printf("x=%f,f(x)=%f",x,y); 
return 0;}

