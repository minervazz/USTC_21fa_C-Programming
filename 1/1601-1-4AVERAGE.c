#include<stdio.h>
int main() {
	float data[8]={131,127,146,135,120,114,133,140};
	float sum=0;
	float ave;
	int i;
	for(i=0;i<8;i++)
	{
		sum=sum+data[i];
	}
	ave=sum/8;
	printf("the average is %.2f",ave);
	return 0;
} 
