#include<stdio.h> 
#include<stdlib.h> 
void Eu(float *a,float *b,int n,float *t) 
{	printf("输入向量1:");
	for(int i=0;i<n;i++)  
		scanf("%f",a+i);
	printf("输入向量2:"); 
	for(int i=0;i<n;i++) 
		scanf("%f",b+i);	 
	for(int i=0;i<n;i++)
		*t=*t+*(a+i)**(b+i);
	printf("内积为%f",*t);
}                        
main()
{	int n;
	float *a,*b,E=0,*t=&E; 
	printf("输入向量维数:");
	scanf("%d",&n); 
	a=(float *)malloc(n*sizeof(float));
	b=(float *)malloc(n*sizeof(float));
	if(a==NULL||b==NULL)
	{   printf("内存不足");
		exit(1); 
	}
	else Eu(a,b,n,t);
} 
