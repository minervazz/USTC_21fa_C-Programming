#include<stdio.h>
#include<math.h>
int main(){
	float x,y,z,p,s;
	printf("输入三角形的3个边：");
	scanf("%f%f%f",&x,&y,&z);
	
	if((x+y<=z)||(z+y<=x)||(x+z<=y))//判断能否构成三角形 
	printf("Error");
	
	else if ((x+y>z)&&(z+y>x)&&(x+z>y))
	{p=(x+y+z)/2;
	 s=sqrt(p*(p-x)*(p-y)*(p-z));    //海伦公式求面积 
	 
	 if((x==y)&&(y==z)&&(z==x))  //判断是否是等边 
	 printf("边长为%f%f%f的三角形是等边三角形，其面积为：%f",x,y,z,s);
	 
	 else if((x==y)||(y==z)||(z==x)&&((x*x+y*y-z*z)*(x*x+z*z-y*y)*(y*y+z*z-x*x)!=0))    //判断是否不等边但是等腰 
	 printf("边长为%f%f%f的三角形是等腰三角形，其面积为：%f",x,y,z,s);
	 
	 else if((x*x+y*y==z*z)||(x*x+z*z==y*y)||(y*y+z*z==x*x)&&((x-y)*(y-z)*(z-x)!=0))    //判断是否是不是等腰的直角三角形 
	 printf("边长为%f%f%f的三角形是直角三角形，其面积为：%f",x,y,z,s);
	 
	 else if((x*x+y*y==z*z)||(x*x+z*z==y*y)||(y*y+z*z==x*x)&&((x-y)*(y-z)*(z-x)==0))    //判断是否是等腰直角三角形 
	 printf("边长为%f%f%f的三角形是等腰直角三角形，其面积为：%f",x,y,z,s);
	 
	 else
	 printf("边长为%f%f%f的三角形是一般三角形，其面积为：%f",x,y,z,s);
    }
	
	return 0; 
} 
