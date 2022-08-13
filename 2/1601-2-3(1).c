#include<stdio.h>
int main()
{int m;
 printf("输入一个整数(0<=m<30)：\n");
 scanf("%d",&m);
 if (m>=0&&m<30)
 {
 	switch(m/10){
 		case 0:printf("m=%d时，f(m)=%d",m,m);break;
 		case 1:printf("m=%d时，f(m)=%d",m,m*m+1);break;
 		case 2:printf("m=%d时，f(m)=%d",m,m*m*m+m*m+1);break;
	 }
 }
 else printf("输入的范围不对\n");
 return 0;
}
//草，执行出来提示语都是乱码
