#include <stdio.h>
#include <math.h>
int main()
{
float a, b, c, d, del, x1, x2;
printf("请按二次项、一次项、常数项的顺序输入数据：\n");
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);
if(a == 0)
{
printf("输入的二次项系数为 0，方程不是一元二次方程。\n"); 
return(-1);
}

d = -b/(2*a);
del=pow(b, 2) - 4*a*c;

if (del == 0)
	{x1 = x2 = d;
	printf("一元二次方程%fx^2+%fx+%f=0  有两个相同的实数根：x1=x2=%f\n",a,b,c,x1);}
else if (del > 0)
	{x1 = d + sqrt(del)/ (2*a); x2 = d - sqrt(del)/ (2*a);
	printf("一元二次方程%fx^2+%fx+%f=0  有两个不相同的实数根：x1=%f ,x2=%f\n",a,b,c,x1,x2);} 
else
	{x1 = sqrt(abs(del))/(2*a); 
	x2 = sqrt(abs(del))/(2*a);
	printf("一元二次方程%fx^2+%fx+%f=0  有两个共轭复数根：x1=%f+i%f ,x2=%f-i%f\n",a,b,c,d,x1,d,x2);}
	
return 0;
}

