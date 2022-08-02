#include<stdio.h>
int main()
{float x;
 printf("输入一个在0到30 之间的实数，左闭右开：\n");
 scanf("%f",&x);
 if (x>=0&&x<10){
    printf("x=%f时，y=%f",x,x);
 }
 else if (x>=10&&x<20){
    printf("x=%f时，y=%f",x,x*x+1);	
 }
 else if (x>=20&&x<30){
 	printf("x=%f时，y=%f",x,x*x*x+x*x+1);
 }
 else printf("你输入的数超出范围了"); 
 return 0;
}

