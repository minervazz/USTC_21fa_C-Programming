#include<stdio.h>
#include<string.h> 
char biaozhun[]={'A','a','B','b','C','c','D','d','E','e',
	'F','f','G','g','H','h','I','i','J','j','K','k','L',
	'l','M','m','N','n','O','o','P','p','Q','q','R','r',
	'S','s','T','t','U','u','V','v','W','w','X','x','Y',
	'y','Z','z','0','1','2','3','4','5','6','7','8','9'}; 
void ddl(char *a,char*b)
{   int n1=0,n2=0,del=0;//1为大于，-1为小于 
	char get1,get2;
	n1=strlen(a);
	n2=strlen(b);
/*	if(n1>n2)
	{	printf("第一串大");
		return;} 
	else if (n1<n2) 
    {	printf("第二串大");
    	return;}  */
	for(int i=0;i<n1;i++)
	{	for(int j=0;j<61;j++)
			if(a[i]==biaozhun[j])
				get1=j;
		for(int j=0;j<61;j++)
			if(b[i]==biaozhun[j])
				get2=j;
		if(get1<get2)
		{	printf("第二串大");
			return;} 
		else if(get1>get2)
		{	printf("第一串大");
			return;}	
	} 
	if(n1>n2)
	{	printf("第一串大");
		return;} 
	else if (n1<n2) 
    {	printf("第二串大");
    	return;}  
	else  printf("一样大"); 
}
main()
{	int x; 
	char a[100]={0},b[100]={0}; 
	printf("第一串键入:\n"); 
	gets(a); 
	printf("第二串键入:\n");
    gets(b);
	ddl(a,b);	 
}
