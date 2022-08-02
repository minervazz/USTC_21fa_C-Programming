#include<stdio.h>
int main()
{
	float height;
	int weight;
	float bmi;
	
	printf("输入身高（米）：");
	scanf("%f",&height);
	printf("输入体重（千克）：");
	scanf("%d",&weight);
	bmi=weight/(height*height);
	
	if(bmi<18.5){
		printf("BMI指数为：%f，",bmi);
		printf("体重过轻");
	}
	else if(bmi>=18.5&&bmi<24.9){
	    printf("BMI指数为：%f，",bmi);
		printf("体重正常");
	}
	else if(bmi>=24.9&&bmi,29.9){
		printf("BMI指数为：%f，",bmi);
		printf("体重过重");
	} 
	else{
		printf("BMI指数为：%f，",bmi);
		printf("肥胖");
	}
	return 0;
}
 
