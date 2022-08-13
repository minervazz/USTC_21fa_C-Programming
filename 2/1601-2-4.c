#include<stdio.h>
int main()
{int x,y;
 printf("请输入一个在-1000000到1000000之间的整数\n");
 scanf("%d",&x);
 y=x%15;
 if (x<-1000000||x>1000000){
 	printf("not in range\n");
 }
 else if (y<=1e-10){
 	printf("YES");
 }
 else printf("NO");
 return 0;
}

