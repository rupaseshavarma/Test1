#include"header.h"

int main()
{
	node * head=createnode(),*middle=createnode(),*last=createnode();
	head->next=middle;
	middle->next=last;
        prntll(head);
	printf("-----------------------------\n");
        storell(head);
	head=reversell(head);
	prntll(head);
	return 0;
}
