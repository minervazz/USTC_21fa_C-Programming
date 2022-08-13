#include<stdio.h>
#define swap(a,b); a=b-a,b=b-a,a=a+b; 
main()
{	int m,n,temp;
	printf(" ‰»Îm,n:");
	scanf("%d%d",&m,&n);
	swap(m,n);
	printf("%d %d",m,n);
}
