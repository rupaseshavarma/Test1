#include"header.h"

node * createnode(void)
{
	node * new =(node *)malloc(sizeof(node));
	printf("enter the data along with key\n");
	scanf("%d%d",&new->data,&new->key);
	new->next=NULL;
	return new;
}

void prntll(node *n1)
{
	while(n1)
	{
		printf("Key--->%d\tData--->%d\n",n1->key,n1->data);
		n1=n1->next;
	}
}

node *reversell(node *n1)
{
	node *p=NULL,*q=NULL,*r=NULL;

	if(n1)
		p=n1;
	else 
		return 0;
	if(p->next)
		q=p->next;
	else 
		return n1;
	if(q->next)
		r=q->next;
	else
	{
		q->next=p;
		p->next=NULL;
		return q;
	}
	while(q)
	{
		q->next=p;
		p=q;
		q=r;
		if(r)
			r=r->next;
	}
        n1->next=NULL;
        return p;
}

void storell(node *n1)
{
	FILE *fptr;
	fptr=fopen("ll.txt","a");
	fprintf(fptr,"Test for ll storage");
	while(n1)
	{
		fprintf(fptr,"\n\tsalary=%d\n\tpf----=%d\n",n1->data,n1->key);
		n1=n1->next;
	}
}
