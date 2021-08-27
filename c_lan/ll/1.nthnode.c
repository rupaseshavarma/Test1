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
int main()
{
	int n;
	node *head=NULL,*last=NULL,*new=NULL;
	if(!head)
		head=createnode();
	printf("Press any key other than y to terminate the growth of linked list\n");
	while(1)
	{
		if(!last)
		{
			last=createnode();
			head->next=last;
		}
		else
		{
			new=createnode();
			last->next=new;
			last=new;			
		}
		//getchar();
		printf("\tChoose options\n\t1.For continue growing ll\n\t2.For adding node infront of head\n\t3.For adding node after the key\n\t4.to print the linkedlist \n");

		scanf("%d",&n);
		switch(n)
		{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
	                        prntll(head);
				break;
			deafault:
				printf("please choose a valid option\n");
			        continue;
				break;
		}
	}
	prntll(head);
	return 0;
}
