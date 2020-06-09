// What will be the output?

#include<stdio.h>

void main()
{
	char c[] = "GCETTB";
	char *p = c;
	printf("%s",p+p[2]-p[1]);
	printf("\n");
}