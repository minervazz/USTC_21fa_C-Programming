#include<stdio.h>
int main()
{	char a[100]={0},temp; 
	int t,i,k; 
	printf("ÊäÈë×Ö·û´®\n");
	gets(a); 
	
	for(t=0;a[t]!=0;t++)
		for(i=t;a[i]!=0;)
		{	if(a[i]==a[i+1])
			{	for(k=i+1;a[k]!=0;k++)
				{	a[k]=a[k+1]; 
				} 
			}
			else i++;	
		} 
		
	for(i=0;a[i]!=0;i++)
		printf("%c",a[i]); 
	return 0;
}
