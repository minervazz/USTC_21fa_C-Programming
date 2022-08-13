#include <stdio.h>
#include <math.h> 
int main()
{	int a[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int i=0,j=14,n,mid,del=0; 
/*	printf("请输入15个数：\n");
	for(i=0;i<15;i++)
		scanf("%d",&a[i]); 
*/ 
	printf("请输入查找数：");
	scanf("%d",&n);
 	
	i=0; 
	while(i<j) 
	{	if(a[i]==n)
		{	printf("该数是第%d个元素\n",i+1);
			return 0;
		} 
		else if(a[j]==n)
		{	printf("该数是第%d个元素\n",j+1);
			return 0;
		}
		else if(n<a[0]||n>a[14])
		{	printf("无此数！\n");
			return 0; 
		}
		else
		{	mid=(i+j)/2;
			if(a[mid]<n)
				i=mid+1;
			else if(a[mid]>n)
				j=mid-1;
			else if(a[mid]==n)
			{	printf("该数是第%d个元素\n",mid+1);
				del=1;
				return 0; 
			}
		}
	}
	if(del==0)
	printf("无此数！\n"); 
}
 //2 4 6 8 10 12 13 15 17 22 33 44 55 66 77
