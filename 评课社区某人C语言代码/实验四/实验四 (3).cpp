#include <stdio.h> 
#define MAXLEN 16
main()
{
	int inform,outform,c,i,next;
	char digits[MAXLEN],a,b,ch;
	next=0;
	while ((ch=getchar ())<='9'&&ch>='0')
		digits[next ++]=ch;  //ch在while已经getchar过滤了<  
	
	a=getchar();              
	
	if(a<='9'&&a>='2')
		inform=a-'0';
	else
		inform=10;      
	getchar();//过滤> 
	b=getchar();
	outform=(b<='9'&&b>='2')? (b-'0'):10;  
	//b不在2-9中，按十进制处理
	 
	for(c=i=0; i<=next-2; i++)
		c=(c+digits[i]-'0')*inform;
	c=c+digits[i]-'0';
	//迭代转化为十进制  
	next=0;    
	
	do digits[next++]=c%outform+'0';  
	while((c/=outform)>0);  
 
	for(i=next-1;i>=0;i--) 
		printf("%c", digits[i]); 
} 
