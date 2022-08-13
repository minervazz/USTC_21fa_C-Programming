
#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979
int main()
{float R,V; 
printf("请输入球半径R：");scanf("%f",&R);
if (R>0) 
	{V=4.0/3*R*R*R*PI; 
	printf("V=%-f",V);}
else printf("请输入正确的半径");  }
