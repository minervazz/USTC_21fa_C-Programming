#include<stdio.h>
#include<math.h> 
int judge(int num) 
{	int i;
	for(i=2;i<num;i++) 
		if(num%i==0)
			return 0; 
	return 1; 
} 
int T(int num)
{	int b=0;
	while(num>0)
	{	b=b*10+num%10;
		num=num/10; 
	} 
	return b;
}		
main()
{   int m,n,i,d=0;
	while(1)
	{	printf("输入升序的m和n：");
		scanf("%d%d",&m,&n); 
		if(m>=n||m<2||n<2)
			printf("输入不正确，请重新输入\n"); 
		else
		{   for(i=m;i<=n;i++)
				if(judge(i)==1&&judge(T(i))==1)
				{	d++;
					printf("%5d%c",i,d%5==0?'\n':' ');
				}
			if(d=0)
				printf("0");
			return 0;
		} 
    } 
}
