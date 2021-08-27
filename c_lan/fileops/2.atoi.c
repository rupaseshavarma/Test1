#include<stdio.h>
int main()
{
	int i,n=0;
	char str[100];
	printf("enter a number \n");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		n += str[i]-'0';
		n *= 10;
	}
	printf("%d\n",n/10);
	return 0;
}

