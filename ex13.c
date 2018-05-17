#include <stdio.h>

int main(int argc, char * argv[])
{
	if(argc<2)
	{
		printf("EH ROAR, you need at least 1 argument\n");
		return 1;
	}
	
	int i;
	for(i = 0; argv[1][i] != '\0'; i++)
	{
		switch(argv[1][i])
		{
			case 'A':
			case 'a':
				printf("Char %d be an 'A'\n", i);
				break;
			case 'E':
			case 'e':
				printf("Char %d be an 'E'\n", i);
				break;
			case 'I':
			case 'i':
				printf("Char %d be an 'I'\n", i);
				break;
			case 'O':
			case 'o':
				printf("Char %d be an 'O'\n", i);
				break;
			case 'U':
			case 'u':
				printf("Char %d be a 'U'\n", i);
				break;
			case 'Y':
			case 'y':
				printf("Char %d be a 'Y'\n", i);
				break;
			default:
				printf("CHAR %d AIN'T BE NO VOWEL! BIC.\n", i);

		}	
	}
	return 0;
	
}