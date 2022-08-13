#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979
int main()
{float R,H,V; 
printf("请输入圆柱体半径R：");scanf("%f",&R);
printf("请输入圆柱体高H：");scanf("%f",&H);
if (R>0&&H>0) 
	{V=PI*R*R*H; 
	printf("圆柱体体积为%-f",V);}
else printf("\n请输入正确的圆柱体参数");  }
