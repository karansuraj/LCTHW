#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

//Create "Person structure"
struct Person{ 
	char *name;
	int age;
	int height;
	int weight;
};
//After this creation, we can actually use "struct Person" as a compound data type


//Create function "Person_create" based on the Person structure
//include 4 inputs, a char pointer for name, int age, int height, and int weight
struct Person *Person_create(char *name,
	int age, int height, int weight)
{
	//Establish who structure defined by Person structure and allocate memory
	//the size of the Person structure
	//Then make the assertion that the who structure is not Null to ensure we have a
	//valid piece of memory back from malloc
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);

	//Define each element of the who structure by the input parameters of the
	//"Person_create" function
	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;	//Return the "who" structure as a result of this function
}

//The following is a function to distroy the input parameter structure, freeing 
//memory allocations
void Person_destroy(struct Person *who)
{
	assert(who != NULL);

	free(who->name);
	free(who);
}

//This function prints the elements of the input structure based on the "Person" struct
void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[])
{
	//make two people structures
	struct Person *joe = Person_create(
		"Joe Alex", 32, 64, 140);

	struct Person *frank = Person_create(
		"Frank Blank", 20, 72, 180);

	//print them out and where they are in memory
	printf("Joe is at memory location %p:\n", joe);
	Person_print(joe);
	
	printf("Frank is at memory location %p:\n", frank);
	Person_print(frank);

	//Person_destroy(NULL);
	//Make everyone age 20 years & print them again
	joe->age += 20;
	joe->height-= 2;
	joe->weight += 40;
	Person_print(joe);

	frank->age +=20;
	frank->weight += 20;
	Person_print(frank);
	//Person_print(NULL);
	//destroy them both so we clean up
	Person_destroy(joe);
	Person_destroy(frank);

	return 0;

}

