#include <stdio.h>


int main()
{
	int a = 5;
	int *pointer_to_a = &a;
	printf(*pointer_to_a);
	printf("\n");
	printf(pointer_to_a);
	printf("\n");
	return 0;
}


