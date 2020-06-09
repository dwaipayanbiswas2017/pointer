#include <stdio.h>

void main()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	printf("Values : ");
	for(int i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\nTest : ");
	printf("\narr : %u",arr);
	printf("\n&arr : %u",&arr);

	printf("\narr+1 : %u",arr+1);
	printf("\n&arr+1 : %u",&arr+1);
	printf("\n");

	printf("\n*(arr) : %d",*(arr));
	printf("\n*(&arr) : %d",*(&arr));

	printf("\n*(arr+1) : %d",*(arr+1));
	printf("\n*(&arr+1) : %d",*(&arr+1));
	printf("\n");

	int *p = &arr;
	printf("\nUsing pointer : ");
	printf("\nP : %u",p);
	printf("\n&P : %u",&p);
	printf("\nP+1 : %u",p+1);
	printf("\n*P : %u",*p);
	printf("\n*P+1 : %u",*p+1);
	printf("\n*(P)+4 : %u",*(p)+4);
	printf("\np[3] : %u",p[3]);
	printf("\n");
}
