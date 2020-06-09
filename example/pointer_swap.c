#include <stdio.h>

void swap(int *x, int *y);

void main()
{
int a,b;
a = 5;
b = 6;
printf("Before swap:\n");
printf("a = %d and b = %d",a,b);

swap(&a,&b);

printf("\nAfter swap:\n");
printf("a = %d and b = %d",a,b);
}

void swap(int *x, int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
}
