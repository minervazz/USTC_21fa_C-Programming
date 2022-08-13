#include<stdio.h>
int main()
{int x;
printf("输入成绩:"); 
scanf("%d",&x);
if(x<0||x>100)
	printf("成绩错误\n");
else 
  switch(x/10)
  {case 10:  
  case 9:printf("成绩等级为A\n");break;
  case 8:printf("成绩等级为B\n");break;
  case 7:printf("成绩等级为C\n");break;
  case 6:printf("成绩等级为D\n");break;
  default:printf("成绩等级为E\n");} 
return 0;}

