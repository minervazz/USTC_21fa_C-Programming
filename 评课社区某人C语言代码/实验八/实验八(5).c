#include<stdio.h>
#include<stdlib.h>
#define N 13 
struct node{
	int num;
	int die;
	struct node *next; 
}; 
struct node *CreateListR(){ 
	struct node *head=NULL,*p,*rear;
	int i=1;
	while(i<=N)
	{   p=(struct node *)malloc(sizeof(struct node));
		p->num=i++;
		p->die=0; 
		if(!head)head=p;
		else rear->next=p; 
		rear=p; 
	} 
	rear->next=head; 
	return head; 		
} 
main()
{	struct node *p;
	p=CreateListR(); 
	int i=1,d=0;
	printf("ĞòºÅ  ËÀÍöË³Ğò\n");
	for(;d<N;i++)
	{	if(i%3==0) 
		{	p->die=++d;
			printf("%3d %6d\n",p->num,p->die); 
		}
		if(p->die==0) p=p->next;
		for(;p->die!=0;p=p->next); 
	} 
} 
