#include<stdio.h>
#include<math.h>
void ddl(double x)              
{	double *p;
	p=&x; 
	for(int i=7;i>=0;i--)
		printf("%02X ",*((unsigned char*)p+i));
} 
main()               
{	double x;
    printf("输入这个数字:");
	scanf("%lf",&x);
	ddl(x); 
}


