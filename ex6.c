#include <stdio.h>

int main(int argc, char * argv[])
{
	int a = 1;
	float b = 2.0f;
	double c = 3.00;
	char d = '4';
	char e[] = "5.0";

	printf("I don't give %d damn about your %f cats with their %f paws with their %c grins and their %s stares.\n", a, b, c, d, e);
	return 0;
}