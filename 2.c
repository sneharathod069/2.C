#include<stdio.h>


int main()
{
	int a, i, j;

	printf("Enter num: ");
	scanf("%d", &a);

	printf("a=%d then output : ", a);

	for(j=1, i= 1; j<=a; i+=2, j++)
	{
		printf("%d, ", i);
	}

	return 0;
}

