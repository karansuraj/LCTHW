#include <stdio.h>


int main(int argc, char * argv[])
{	
	printf("%d",argc);
	printf("\n");
	int i;
	for(i = 1; i<argc; i++)
	{
		printf("DAT STRING LIT: %s\n", argv[i]);
	}

	char *another[] = {"Ain't", "need",  "no"};
	for(i = 0; i<3; i++)
	{
		printf("Ain't no user input: %s\n", another[i]);
	}

	printf("Specific example: %c\n", another[1][1]);
	return 0;
}