#include<stdio.h>
int main()
{float f,c; 
printf("请输入华氏度f：");scanf("%f",&f);
c=5.0/9*(f-32) ;
if(c>=-273.15)  //华氏度绝对零度为-459.67℉ 
	printf("华氏度%-.3f下对应摄氏度：%-.3f℃",f,c);
else printf("请输入正确的温度");} 
