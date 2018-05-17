#include <stdio.h>

int main(int argc, char * argv[])
{
	int i = 0;
	while (i<argc)
	{
		printf("Yoda: %s\n", argv[i]);
		i++;
	}
	char * names[] = {"Yeela", "doola", "toola", "joule eh"};
	printf("%s\n", names[3]);
	return 0;
}