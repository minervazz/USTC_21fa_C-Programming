#include<stdio.h>
int main()
{
	int m,n,temp,r,s; 
	printf("输入两个正整数:");
	scanf("%d%d",&m,&n);
	s=m*n; 
	if(m>0&&n>0)
	{	if(m<n)
		{	temp=n;
			n=m;
			m=temp;
		} 
		for(;(r=m%n)!=0;)
		{   m=n;
			n=r;	
		}
		m=s/n;
		printf("最大公约数:%d,最小公倍数%d",n,m); 
	}
	else printf("输入不正确");	
} 
