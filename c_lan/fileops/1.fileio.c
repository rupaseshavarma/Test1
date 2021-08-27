#include<stdio.h>
int main()
	{
		FILE *fptr;
		fptr=fopen("abc","a");
		if(fptr==NULL)
		{
			printf("File openening unsucessfull\n");
			return 0;
		}

		int salary=100,pf=100,net=500;
		fprintf(fptr,"Employee salary details:\n\tsalary=%d\n\tpf----=%d\n\tnet---=%d\n",salary,pf,net);
		return 0;
	}


