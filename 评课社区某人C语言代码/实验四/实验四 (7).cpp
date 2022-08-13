#include<stdio.h>
int main()
{	
	char t; 
	int space=0,pic=0,LN=0,oth=0,a[27]={0},b[27]={0};
	int i,d;
	printf("输入被统计字符流(使用Ctrl+Z+回车结束输入)\n");
    for(;t=getchar(),t!=EOF;)
	{	
		switch(t)
			{	
				case ' ':space++;break;
				case '\t':pic++;break;
				case '\n':LN++;break;
				default:oth++; 
			}
		
		if(t<='z'&&t>='a')
			{
				a[t-'a'+1]++;
				a[0]++;
			}	
		else if(t<='Z'&&t>='A') 
			{
				b[t-'A'+1]++;
				b[0]++;
			}
		}
		
	for (printf("共有英文字母：%d个，小写字母：%d个\n",a[0]+b[0],a[0]),i=1,d=1;i<=26;i++,d++) 
		printf("%c:%d个%c",i+'a'-1,a[i],d%5==0?'\n':' ');	
	for (printf("\n大写字母：%d个\n",b[0]),i=1,d=1;i<=26;i++,d++) 
		printf("%c:%d个%c",i+'A'-1,b[i],d%5==0?'\n':' ');
	printf("\n空格：%d个 ",space);	
	printf("制表符：%d个 ",pic);	
	printf("换行符：%d个 ",LN);	
	printf("其他字符：%d个 ",oth);	
}

