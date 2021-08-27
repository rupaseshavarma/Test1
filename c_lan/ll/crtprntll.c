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
