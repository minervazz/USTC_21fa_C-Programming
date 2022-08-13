
#include<stdio.h>
#include<math.h>
int main()
{float x,y;double n;
aa:printf("请依次输入苹果个数、减少周期、总时间n x y：");
scanf("%lf%f%f",&n,&x,&y) ;
if(y<=n*x&&y>0&&n>0&&x>0&&(floor(n+0.5)==n)) //向下取整，判断n为整数 
	{n=n-ceil(y/x);
	printf("剩余苹果n=%d\n",(int)n);} 
else if (y>n*x&&y>0&&n>0&&x>0&&(floor(n+0.5)==n))
	printf("存在时间盈余，此时苹果数为0\n");
else  printf("请输入正确的数据\n");
goto aa; 
return 0;}

