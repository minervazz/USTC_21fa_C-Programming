#include<stdio.h>
#include<math.h> 
int main()
{ 
	double sinx=0,x,tx,y;
	int i;
	printf("ÊäÈëx:");
	scanf("%lf",&x); 
	y=sin(x);
	sinx=tx=x;
	for(i=1;fabs(tx)>=1e-6;i++)
	{                     
		tx=tx*(-1)*x*x/((2*i+1)*(2*i)); 
		sinx=sinx+tx; 
	} 
	printf("sinx=%f,¿âº¯Êýsinx=%f",sinx,y);
}

