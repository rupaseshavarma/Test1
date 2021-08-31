#include"header.h"

int main()
{
	node *top=NULL;
	int n;
	printf("Choose n value 1 to push 2 to pop\n");
	while(1)
	{
		printf("\n\t1.push/2.pop/3.break\n");
		scanf("%d",&n);
		if(n==1)
		{
			top=push(top);
			prntll(top);
		}
		if(n==2)
		{
			if(top)
			{
			top=pop(top);
			}
			else
				printf("Stack is empty!!!.....\n");
		}
		if(n==3)
		{
			break;
		}
	}
	prntll(top);
	return 0;
}
