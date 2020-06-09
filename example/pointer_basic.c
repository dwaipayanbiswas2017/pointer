#include <stdio.h>

void main()
{

int x = 5;
int *y = &x;

printf("Value of X : %d",x);
printf("\nAddress of X : %u",&x);
printf("\nValue of Y : %u",y);
printf("\nValue of value of Y : %d", *y);
printf("\nAddress of Y : %u", &y);
printf("\n");

}
