#include<stdio.h>
#include<math.h>
int main()
{
	int num=500,i,a[11]={0},d=0,del;
	for(;d<10;num--) 
	{	
		for(i=2,del=1;i<=sqrt(num);i++)
		{	if(num%i==0)
            del=0;
		}
		
		if(del==1)
		{	d++;
			a[d]=num;
			a[0]+=a[d];
		}
	}
	for(i=1;i<10;i++)
		printf("%d+",a[i]);
	printf("%d=%d",a[10],a[0]);	 
}

