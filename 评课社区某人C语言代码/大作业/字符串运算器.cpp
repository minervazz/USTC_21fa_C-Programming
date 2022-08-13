#include<bits\stdc++.h>
int i,j,k=0; 
void menu(){
	printf("*******菜单*******\n"); 
	printf("0-退出程序\n"); 
	printf("1-输入字符\n");
	printf("2-显示字符串\n"); 
	printf("3-求字符串长度\n");
	printf("4-字符串连接\n");
	printf("5-字符串比较\n");
	printf("6-字符串复制\n");
	printf("7-字符串插入\n");
	printf("8-求子串\n");
	printf("9-子串查找\n"); 
	printf("******************\n\n"); 
} 
void StrGet(char *s){
	getchar();//去除缓存区的回车符，因为之前scanf只读取了m，也可以用rewind(stdin)来清除缓存区  
	gets(s);
	k++; 
} 
void StrPut(char *s){
 	puts(s);
} 
int StrLen(char *s){
 	i=0;
 	while(s[i]) i++;
 	return(i);
} 
void StrCat(char *s,char *t){
	for(i=0;s[i]!='\0';i++);
	for(j=0;(s[i++]=t[j++])!='\0';); 
} 
int StrCmp(char *s,char *t){
	i=0;
	while(s[i]==t[i])
		if(s[i++]=='\0')
		return 0;
	return(s[i]-t[i]);
} 
void StrCpy(char *s,char *t){
	i=0;
	while((s[i]=t[i])) i++;
} 
void StrIns(char *s,char *t,int pos){  
	int l=0; 
	for(j=StrLen(s)-1;j>=pos;j--)
		s[j+StrLen(t)]=s[j];     
	for(l=pos,j=0;l<pos+StrLen(t);l++,j++) //i为全局，在StrLen中有i++ 
		s[l]=t[j];  
} 
void StrSub(char *s,char *t,int pos,int n){
	for(i=pos-1,j=0;j<n;i++,j++)
		t[j]=s[i];
	t[j]='\0';
} 
int StrStr(char *s,char *t){
	int l=0;
	for(i=0;s[i]!='\0';i++)
	{	for(j=i,l=0;t[l]!='\0'&&(s[j]==t[l]);j++,l++);
			if(t[l]=='\0')
				return i; 
	} 
	return -1; 
}                                           
main(){	 
	int m,n,pos1,pos2,pos3; 
	char arr[1000][1000]={0}; 
	menu(); 
	while(1)
	{	printf("请输入菜单序列:");
		scanf("%d",&m);
		putchar('\n');
		switch(m)
		{	case -1:menu();break;
			case 0: return 0; 
		    case 1: printf("输入串%d:",k+1);
					StrGet(arr[k]);
					break;
			case 2: for(i=0;i<k;i++){ 
						printf("第%d串:",i+1); 
						StrPut(*(arr+i)); 
					} 
					break;				 
			case 3: printf("被输出串长串序列：");
					scanf("%d",&pos1);
					printf("串长为%d\n",StrLen(*(arr+pos1-1))); 
					break;
			case 4: printf("将串*连接到串*之后:");
					scanf("%d%d",&pos2,&pos1); 
					StrCat(*(arr+pos1-1),*(arr+pos2-1));
					break;					
			case 5: printf("输入要比较的串序列:");
					scanf("%d%d",&pos1,&pos2); 
					if(StrCmp(*(arr+pos1-1),*(arr+pos2-1))==0)printf("%s=%s",*(arr+pos1-1),*(arr+pos2-1));
					if(StrCmp(*(arr+pos1-1),*(arr+pos2-1))>0)printf("%s>%s",*(arr+pos1-1),*(arr+pos2-1));
					if(StrCmp(*(arr+pos1-1),*(arr+pos2-1))<0)printf("%s<%s",*(arr+pos1-1),*(arr+pos2-1));
					putchar('\n'); 
					break;
			case 6: printf("将串*复制到串*中:");
					scanf("%d%d",&pos2,&pos1); 
					StrCpy(*(arr+pos1-1),*(arr+pos2-1)); 
					break;
			case 7:	printf("被插入串序、插入串序、插入位置:");
					scanf("%d%d%d",&pos1,&pos2,&pos3);
					StrIns(*(arr+pos1-1),*(arr+pos2-1),pos3-1); 
					break;
			case 8:	printf("被截串序列、保存位置、起始下标及范围：");
					scanf("%d%d%d%d",&pos1,&pos2,&pos3,&n);
					StrSub(*(arr+pos1-1),*(arr+pos2-1),pos3,n);
					printf("子串为");
					StrPut(*arr+pos2-1);
					break;
			case 9: printf("被查找串序、查找样本序:"); 
					scanf("%d%d",&pos1,&pos2); 
					if(StrStr(*(arr+pos1-1),*(arr+pos2-1))>=0) 
						printf("起始下标为%d\n",StrStr(*(arr+pos1-1),*(arr+pos2-1))+1);
					else printf("找不到子串\n");
					break;
		} 
	}		
}
