#include <stdio.h>
#include <ctype.h>

//Forward Declarations of Functions
//Functions are declared as void type if they do not "return"
//	anything, but still perform some action

int can_print_char(char chr);
void print_letters(char chars[]);

void print_arguments(int argc, char * argv[])
{
	int i = 1;
	for(i = 1; i<argc; i++)
	{
		printf("Word %d Letters:\n", i);
		print_letters(argv[i]);
		printf("\n");
	}
}

void print_letters(char chars[])
{
	int y = 0;
	for(y = 0; chars[y] != '\0'; y++)
		if (can_print_char(chars[y]))
		{
			printf("%c==%d\n", chars[y], chars[y]);	
		}
		
}

int can_print_char(char chr)
{
	return isalpha(chr) || isblank(chr);
}

int main(int argc, char * argv[])
{
	print_arguments(argc, argv);
	return 0;
}