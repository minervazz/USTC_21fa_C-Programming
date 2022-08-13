#include<stdio.h>
#include<stdlib.h> 
struct node{
	char name[20];
	int	id,sex,age;
	float score; 
	struct node *next; 
}; 

struct node *order(struct node *head){    
	struct node *p,*q,*t=(struct node *)malloc(sizeof(struct node));  //一定要分配空间，不然t无法被复制 ，接下来的p和q都是有空间的！！！！ 
	int i; 
    for(p=head;p!=NULL&&p->next!=NULL;p=p->next)
    {	for(q=p->next;q!=NULL;q=q->next)
        {	if(p->id > q->id)
	        {	t->id=p->id;	t->age=p->age;	t->score=p->score;	t->sex=p->sex;
				p->id=q->id;	p->age=q->age;	p->score=q->score;	p->sex=q->sex;
				q->id=t->id;	q->age=t->age;	q->score=t->score;	q->sex=t->sex; 
				for(i=0;i<20;i++){	t->name[i]=p->name[i]; p->name[i]=q->name[i];	q->name[i]=t->name[i]; }	   
	    	}
        }
    }  
	free(t); 
} 
void DeleteLast(struct node *head){
	struct node *p=head,*rear; 
	while(p->next)
	{	rear=p;
		p=p->next;
	}
	free(p);
	rear->next=NULL; 
} 	

struct node *CreateListF(void){
	struct node *head, *p;
	int id;
	head=NULL;
	printf("            [姓名][性别][年龄][成绩]\n[学号]");
	scanf("%d",&id);
	while (id!=0)
	{	p=(struct node *)malloc(sizeof(struct node));
		p->id=id;
		scanf("%s %d%d%f",p->name,&p->sex,&p->age,&p->score);
		p->next = head;
		head = p;
		printf("[学号]");
		scanf("%d",&id);
	}
	return head;
}
struct node *CreateListR(void){
	struct node *head, *rear, *p;
	int id;
	head = NULL;
	printf("            [姓名][性别][年龄][成绩]\n[学号]");
	scanf("%d", &id);
	while (id!=0) 
	{	p=(struct node *)malloc(sizeof(struct node));
		p->next=NULL;
		p->id=id;
		scanf("%s %d%d%f",p->name,&p->sex,&p->age,&p->score);
		if (!head) head=p;
		else rear->next=p;
		rear=p;
		printf("[学号]");
		scanf("%d", &id);
	}
	return head;
}
struct node *CreateListO(void){
    struct node *head=CreateListF();
	order(head);
	return head; 
}
struct node *ReadFile(void){        
	struct node *head=NULL,*p,*rear; 
	FILE *fp=fopen("Student_information.txt","r"); 
	if(fp==NULL)
	{	printf("找不到文件\n");
		return 0;
	} 
	fgetc(fp); 
	if(feof(fp))
	{	printf("空文件！\n");
		fclose(fp);
		return head; 
	}        
	rewind(fp); 
	while(!feof(fp))
	{	p=(struct node *)malloc(sizeof(struct node));
		p->next=NULL; 
		fscanf(fp,"%d%s %d%d%f\n",&p->id,p->name,&p->sex,&p->age,&p->score);
		if(!head) head=p;
		else rear->next=p;
		rear=p;  
	} 
	fclose(fp);
	return head; 
} 
void PrintList(struct node *head){
	struct node *p=head;
	if(head) 
	{	printf("[学号]    [姓名]   [性别]   [年龄]   [成绩]\n");
		while (p) 
		{	printf("%6d %9s   %6d   %6d   %6.2f\n",p->id,p->name,p->sex%2,p->age,p->score);
			p = p->next;
		}
	}
	else printf("还未创建链表!\n"); 
}
struct node *InsertPos(struct node *head,struct node *q,int pos){
	struct node *p=head;
	if(!head)
	{	head=q;
		return head;
	} 
	if(pos==1)
	{	q->next=head;
		head=q;
		return head;
	}
	while(pos-2)
	{	p=p->next;
		pos--;
	}
	q->next=p->next;
	p->next=q; 
	return head; 
} 
struct node *InsertList(struct node *head, struct node *q){
	struct node *p;
	if(!head)
	{	head=q;
		return head;
	}
	if(head->id > q->id)
	{	q->next=head;
		head=q;
		return head;
	}
	p=head;
	while(p->next&&p->next->id<q->id)
		p=p->next;
	q->next=p->next;
	p->next=q;
	return head;
}
struct node *DeletePos(struct node *head,int pos){  
	if(!head)
	{	printf("空链表！");
		return 0;
	}
	struct node *p=head,*q=head->next;
	
	if(p->next==NULL)
	{	free(p);
		return 0;
	}	
	if(pos==1)
	{	head=head->next;
		free(p);
		return head;		 
	} 
	while(pos-2)
	{	p=p->next;
		q=q->next; 
		pos--;
	}
	p->next=q->next;
	free(q);
	return head;
}
struct node *DeleteId(struct node *head, int id){   
	struct node *p, *q;
	if (head && head->id==id)
	{	p=head;
		head = p->next;
		free(p);
		return head;
	}
	q=p=head;
	while (p && p->id!=id)
	{	q=p;
		p=p->next;
	}	  
	if (p) 
	{	q->next = p->next;
		free(p);
		return head;
	}
	printf("Not Found!\n");
	return head;
}
struct node *IdFind(struct node *head,int id){
	while(head!=0)
	{	if(head->id==id) return head;
		head=head->next;
	}
	return 0;
}
int Population(struct node *head){
	int i=0;
	while(head) 
	{	head=head->next;
		i++;
	}
	return i; 
}
float Average(struct node *head){
	float s=0;
	struct node *p=head;
	while(p)
	{	s+=p->score;
		p=p->next;
	} 
	return s/Population(head); 
}
float Max(struct node *head){
 	float max=head->score;  
	while(head)
	{	if(head->score>max)max=head->score;
		head=head->next; 
	}	
	return max; 
} 
int NotPass(struct node*head){
		int i=0;
	while(head) 
	{	if(head->score<60.0000)
			i++;	
		head=head->next; 
	}
	return i; 
}	
void DeleteWhole(struct node *head){ 
	for(;head->next->next!=NULL;)
		DeleteLast(head);	
	free(head->next);
	free(head);		 
}
struct node *WriteFile(struct node*head){
	FILE *fp=fopen("Student_information.txt","w+"); 
	while(head)
	{	fprintf(fp,"%6d %9s   %6d   %6d   %6.2f\n",head->id,head->name,head->sex%2,head->age,head->score); 
		head=head->next; 
	} 
	fclose(fp); 
}
struct node *AddFile(struct node*head){      
	FILE *fp=fopen("Student_information.txt","a+");
	int del=0; 
	struct node *p=head,*t=(struct node *)malloc(sizeof(struct node));  
	int i,j;
	for(i=0;i<Population(head);i++,p=p->next)
	{	for(j=0;j<Population(head);j++)
		{	fscanf(fp,"%d%s %d%d%f\n",&t->id,t->name,&t->sex,&t->age,&t->score);
			if(p->id!=t->id)
				del++;
		}
		if(del!=Population(head))
			fprintf(fp,"%6d %9s   %6d   %6d   %6.2f\n",p->id,p->name,p->sex%2,p->age,p->score); 
		rewind(fp); 
	}
	free(t);
	fclose(fp); 
}
struct node *DeleteFile(struct node*head){
	FILE *fp=fopen("Student_information.txt","w+");
	fclose(fp); 
}
 
main(){
	int m1,m2,pos,id;
	struct node *head=NULL,*p;
	printf("*****一级菜单*****\n0-退出程序\n1-创建学生记录链表\n2-打印全部学生记录\n3-插入一条新的学生记录\n4-按条件删除一条学生记录\n5-按学号查找学生记录\n6-统计\n7-销毁学生链表\n8-将学生信息写入磁盘文件\n******************\n\n");
	while(1)
	{	printf("请输入菜单序列:");
		scanf("%d",&m1);
		putchar('\n');
		switch(m1)
		{	case -1:printf("*****一级菜单*****\n0-退出程序\n1-创建学生记录链表\n2-打印全部学生记录\n3-插入一条新的学生记录\n4-按条件删除一条学生记录\n5-按学号查找学生记录\n6-统计\n7-销毁学生链表\n8-将学生信息写入磁盘文件\n******************\n\n");
					break;
			case 0: return 0;
			case 1: printf("****二级菜单1****\n1)头插法\n2)尾插法\n3)创建按学号有序链表\n4)打开学生信息文件创建链表\n0)返回一级菜单\n******************\n");
					printf("请输入二级菜单序列:"); 
					scanf("%d",&m2);
					putchar('\n'); 
					switch(m2)
					{	case 0:break; 
						case 1:head=CreateListF();break;	
						case 2:head=CreateListR();break;
						case 3:head=CreateListO();break;
						case 4:head=ReadFile();break;
					}	break;
			case 2: PrintList(head);break;
			case 3: printf("****二级菜单3****\n1)按指定位序插入\n2)在有序链表中插入\n0)返回一级菜单\n******************\n"); 
					printf("输入二级菜单序列：");
					scanf("%d",&m2);
					putchar('\n'); 
					switch(m2)
					{	case 0:break;
						case 1: p=(struct node *)malloc(sizeof(struct node)); 
								printf("输入新结点\n            [姓名][性别][年龄][成绩]\n[学号]");
								scanf("%d %s %d%d%f",&p->id,p->name,&p->sex,&p->age,&p->score);
								printf("输入插入链表位置的位置："); 
								scanf("%d",&pos);
								head=InsertPos(head,p,pos); 
								break; 
						case 2: p=(struct node *)malloc(sizeof(struct node)); 
								printf("输入新结点\n            [姓名][性别][年龄][成绩]\n[学号]");
								scanf("%d %s %d%d%f",&p->id,p->name,&p->sex,&p->age,&p->score);
								head=InsertList(head,p);
								break;
					} 	break; 
			case 4: if(head==NULL) 
					{	printf("请先创建链表\n");
						break;}
					printf("****二级菜单4****\n1)删除指定位置的记录\n2)删除指定学号的记录\n0)返回一级菜单\n******************\n");
					printf("输入二级菜单序列："); 
					scanf("%d",&m2);
					putchar('\n'); 
					switch(m2) 
					{	case 0: break;
						case 1: printf("被删除结点所在链表位置："); 
								scanf("%d",&pos);
								head=DeletePos(head,pos);
								break;
						case 2: printf("输入指定学号：");
								scanf("%d",&id);
								DeleteId(head,id);
								break;
					}   break;
			case 5: if(head==NULL) 
					{	printf("请先创建链表\n");
						break;}
					printf("输入想要查找的学号:");
					scanf("%d",&id); 
					if(IdFind(head,id))
					{	printf("查找到\n[学号]    [姓名]   [性别]   [年龄]   [成绩]\n");
						printf("%6d %9s   %6d   %6d   %6.2f\n\n",IdFind(head,id)->id,IdFind(head,id)->name,IdFind(head,id)->sex%2,IdFind(head,id)->age,IdFind(head,id)->score);
					}
					else printf("未找到该学号\n"); 
			case 6: if(head==NULL) 
					{	printf("请先创建链表\n");
						break;}
					printf("****二级菜单6****\n1)统计学生人数\n2)统计学生的平均成绩和最高分\n3)统计不及格人数\n0)返回一级菜单\n******************\n");
					printf("输入二级菜单序列："); 
					scanf("%d",&m2);
					putchar('\n'); 
					switch(m2)
					{  	case 0: break;
						case 1: printf("链表总人数：%d\n",Population(head)); 
								break;
						case 2: printf("平均分%6.2f，最高分%6.2f\n\n",Average(head),Max(head));
								break;
						case 3: printf("不及格人数：%d\n",NotPass(head)); 
								break;                   
					}   break;
			case 7: DeleteWhole(head);
					head=NULL; 
					break; 
			case 8:	printf("****二级菜单8****\n1)重写学生文件\n2)追加学生文件\n3)清空学生文件\n0)返回一级菜单\n******************\n"); 
			 		printf("输入二级菜单序列："); 
					scanf("%d",&m2);
					putchar('\n'); 
					switch(m2) 
					{   case 0:break;
						case 1:WriteFile(head);break;
						case 2:AddFile(head);break;
						case 3:DeleteFile(head);break; 
					} 	break;
			 case 9:order(head);break; 
		}
	}
} 
