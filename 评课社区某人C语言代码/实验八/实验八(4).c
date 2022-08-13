#include<stdio.h>
#define N 10 
struct DATA{
	int year,month,day;
};
struct BOOK{
	int id;
	char name[20];
	char author[20];
	char press[20];
	float price;
	struct DATA data;
}; 
void read(struct BOOK *book){
	printf("[书号][书名][作者][出版社][价格][年][月][日]\n");
	int i; 
	for(i=0;i<N;i++){
		 scanf("%d %s %s %s %f%d%d%d",&book[i].id,book[i].name
		 ,book[i].author,book[i].press,&book[i].price,
		 &book[i].data.year,&book[i].data.month,&book[i].data.day);
	} 
}
void print(struct BOOK *book){
	int i; 
	for(i=0;i<N;i++)
		printf("[书号]%d[书名]%s[作者]%s[出版社]%s[价格]%f[出版日期]%d.%d.%d\n"
		,book[i].id,book[i].name,book[i].author,book[i].press,book[i].price,
		book[i].data.year,book[i].data.month,book[i].data.day);	
}
void sort(struct BOOK *book){
	struct BOOK temp;
	int i,j;
	for(i=0;i<N-1;i++)
		for(j=i+1;j<N;j++)
			if(book[j].id<book[i].id){
				temp=book[j];
				book[j]=book[i];
				book[i]=temp;
			}
}
main(){
	struct BOOK book[N];
	read(book);
	sort(book);
	print(book);
}
//1 C语言：从入门到躺好 白雪飞 1414 0 2020 9 1 
//2 C语言：从躺好到买棺 杨一帆 5203 11 4514 1 1 
//3 C语言：从买棺到入棺 邓志坚 5203 22 2020 10 2 
//4 C语言：从入棺到盖棺 任欢 5204 33 2020 11 3 
//5 C语言：从盖棺到丧礼 林佳滢 5203 44 2020 12 4 
//6 C语言：从丧礼到陵地 吴文轩 5203 55 2021 1 3 
//7 C语言：从陵地到入土 白雪飞 5203 66 2020 1 2 
//8 C语言：从入土到上香 白雪飞 5203 77 2020 4 10 
//9 C语言：从上香到修炼 白雪飞 5203 88 2020 2 9 
//10 C语言：从修炼到登仙 白雪飞 5203 99 2020 9 2  
