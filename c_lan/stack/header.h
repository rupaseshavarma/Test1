
#include<stdio.h>
#include<stdlib.h>
typedef struct stu
{
	int data;
	struct stu *next;
	int key;
}node;

node * createnode(void);
void prntll(node *n1);
node *reversell(node *n1);
void storell(node *n1);
node * push(node *top);
node * pop(node *top);
