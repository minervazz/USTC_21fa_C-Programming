#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,d,p,S;
printf("输入a b c:"); 
scanf("%f%f%f",&a,&b,&c);
p=(a+b+c)/2;
p=p*(p-a)*(p-b)*(p-c); 
S=sqrt(fabs(p)); 
if(a+b<=c||c+b<=a||c+a<=b) 
	printf("DATA ERROR!");
else if(a==b&&b==c)
	printf("等边三角形，S=%f",S);
else if((a==b&&b!=c) ||(c==b&&b!=a)||(a==c&&b!=c))
	printf("等腰三角形，S=%f",S); 
else if((fabs(b*b-c*c-a*a)<1e-5)||(fabs(c*c-b*b-a*a)<1e-5)||(fabs(a*a-c*c-b*b)<1e-5))
	printf("直角三角形，S=%f",S);
else printf("其他三角形，S=%f",S);  
return 0;}

