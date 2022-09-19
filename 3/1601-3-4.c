#include<stdio.h>
int main(){
 int i,n;

 printf("输入一个整数n,(n>=3&&n<=45):\n");
 scanf("%d",&n);

 while(n<3||n>45){   //不满足条件，重输 
  printf("重输");
  scanf("%d",&n);
 }

 int a[n];a[0]=0;a[1]=1;
 printf("斐波那契数列的前%d项为：1\n1\n",n);   //先打印前两项 

 for(i=2;i<=n-1;i++){
  a[i]=a[i-1]+a[i-2];     //再通过叠加求后面每一项并打印 
  printf("%d\n",a[i]);
     }

}
