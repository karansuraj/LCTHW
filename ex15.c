#include <stdio.h>

int main(int argc, char * argv[])
{
	//Creating 2 arrays
	int ages[] = {23, 43, 12, 89, 2};
	char * names[] = {
		"Alan", "Frank", "Mary", "John", "Lisa"
	};

	//Get size of ages
	int count = sizeof(ages)/sizeof(int);
	int i = 0;




	//First method to print names + ages using indexing
	for(i = 0; i<count; i++) {
		printf("%s has %d years alive.\n",
			names[i],ages[i]);
	}
	printf("---\n");

	//Setup pointers to start of arrays
	int *cur_age = ages;
	char **cur_name = names;


	printf("---\n");
	printf("ErroSize of int ages: %ld\n", sizeof(ages)/sizeof(int));
	printf("Size of ptr ages: %ld\n", sizeof(cur_name));
	printf("---\n");

	//2nd method using pointers
	for(i=0; i<count; i++){
		printf("%s is %d years old.\n",
			*(cur_name+i), *(cur_age + i));
	}
	printf("---\n");

	//3rd way, pointers are just arrays
	for(i =0; i<count; i++){
		printf("%s is %d years old again.\n",
			cur_name[i], cur_age[i]);
	}
	printf("---\n");

	//4th way w/ pointers in a stupid complex way
	for(cur_name = names, cur_age = ages; 
		(cur_age - ages)<count; cur_name++,
		cur_age++)
	{
		printf("%s lived %d years so far.\n",
			*cur_name, *cur_age);
	}
	return 0;
}