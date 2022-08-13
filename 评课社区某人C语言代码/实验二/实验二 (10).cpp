
#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979
int main()
{float R,H,V,C,S1,S2,M; 
printf("请输入圆锥半径R=");scanf("%f",&R);
printf("请输入圆锥的高H=");scanf("%f",&H);
if (R>0&&H>0) 
	{V=1.0/3*PI*R*R*H; C=2*PI*R;
	S1=PI*R*R;
	M=sqrt(H*H+R*R);
	S2=M*C/2;
	printf("体积V=%-.2f\n底面周长C=%-.2f\n底面积S1=%-.2f\n侧面积S2=%-.2f",V,C,S1,S2);}
else printf("请输入正确的圆柱体参数"); return 0;}
