// array of pointers

#include<stdio.h>

void main()
{
	char *name[] = {"GCETTB", "CSE", "TEXTILE"};
	printf("Array of Pointer: \n");
	printf("\n*name : %s", *name);
	printf("\n*(name + 1) : %s", *(name+1));
	printf("\n*(name + 2) : %s", *(name+2));
	printf("\n*name + 1 : %s", *name+1);
	printf("\n*(name+1)+1 : %s", *(name+1)+1);
	printf("\n");
}