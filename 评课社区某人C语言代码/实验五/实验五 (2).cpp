#include<stdio.h> 
int main()  
{ 	int i,del=0,d=0; 
	char a[100]; 
	printf(" ‰»Î±Ì¥Ô Ω:\n");
	scanf("%s",a);
					
	for(i=0;a[i]!=0;i++)    
	{	if(a[i]=='(')
			del+=1;
		else if (a[i]==')') 
			del-=1;
		
		if(del<0)
		{	d++; 	
		}		 
	} 
	if(del==0&&d==0)
		printf("¿®∫≈∆•≈‰");
	else printf("¿®∫≈≤ª∆•≈‰");
	return 0;
}

