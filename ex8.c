#include <stdio.h>

int main(int argc, char*argv[])
{
	int a[] = {1,2,3,4};
	char name[] = "ZED";
	char names[] = {'Z', 'E', 'D', '\0'};

	printf("Dat int size be %ld\n", sizeof(int));
	printf("But pho real doe: %ld\n", sizeof(a));
	//printf("")
	printf("Quit playin %s.\n", name);
	printf("That char number %ld\n", sizeof(char));
	printf("De char array len be: %ld\n", sizeof(name));

	printf("LAST ONE: %ld\n", sizeof(names));
	printf("Actually one more: %s\n", names);
	return 0;
}