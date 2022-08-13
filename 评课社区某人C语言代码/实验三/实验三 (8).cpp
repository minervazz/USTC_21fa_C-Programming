#include<stdio.h>
int main()
{char zimu; 
printf("输入字母:");
zimu=getchar() ;
if(zimu>='a'&&zimu<='z')
	{zimu=zimu+'A'-'a';
	printf("小写转为大写：%c\n",zimu);}
else if (zimu>='A'&&zimu<='Z') ; 
else {
	printf("请输入正确的字母");
	goto end;} 

switch (zimu)
	{case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':printf("Yes ");break; 
	default :printf("No ") ; }
printf("%d %d",zimu,zimu-'A'+'a');
end: 
return 0;
}

