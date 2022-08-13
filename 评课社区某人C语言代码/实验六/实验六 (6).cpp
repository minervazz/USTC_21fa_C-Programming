#include<stdio.h>
#include<string.h>
void trans(char a[])
{   int i,len;
	char temp;
	len=strlen(a);
	for(i=0;i<=len/2;i++)
	{	temp=a[i];
		a[i]=a[len-i-1]; //*(a+i)=*(len-i-1),给a+i指向的值赋值 
		a[len-i-1]=temp;
	} 
}  //数组是指针不需要通过函数返回值返回 
main()
{   char a[1000]={0};
	printf("输入字符串\n");
	gets(a);
	trans(a);
	for(int i=0;a[i]!=0;i++)
		printf("%c",a[i]);
}
