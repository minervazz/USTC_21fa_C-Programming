#include<stdio.h>
#include<stdlib.h>
struct node{
	int num;
	struct node *next; 
}; 
struct node *CreateListR(){//尾插法 
	struct node *head=NULL,*p,*rear;
	int num;
	printf("num(以0结束):");
	scanf("%d",&num);
	while(num!=0){   
		p=(struct node *)malloc(sizeof(struct node));
	    p->next=NULL;
	    p->num=num; 
		if(!head)head=p;
		else rear->next=p; 
		rear=p; 
		printf("num(以0结束):");
		scanf("%d",&num); 
	}  
	return head; 		
} 
void PrintList(struct node *head){
	struct node *p=head;
	while(p){
		printf("%d\n",p->num);
		p=p->next;
	} 
} 
struct node *trans(struct node *p){
	struct node *q;
	if(p==NULL||p->next==NULL)  //排除空表或单节点 
		return p;
	else
	{	q=trans(p->next);       //trans把操作移动到了链表尾部 
		p->next->next=p;          
		p->next=NULL;           
		return q;	
	} 
} 
main(){
	struct node *head;
	head=CreateListR();
	head=trans(head);
	putchar('\n'); 
	PrintList(head);
} 
