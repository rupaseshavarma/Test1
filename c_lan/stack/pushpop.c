#include"header.h"

node * push(node *top)
{
	node *new=NULL;
	if(top)
	{
		new =createnode();
		new->next=top;
		top=new;
	}
	else 
	{
		top=createnode();
	}	
	return top;
}

node * pop(node *top)
{
	node *temp=top;
	top=top->next;
	printf("Node removed have data %d,%d\n",temp->data,temp->key);
	free(temp);
	return top;
}


