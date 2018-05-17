#include <stdio.h>

int main(int argc, char * argv[])
{
	if (argc>4 && argc<=5)
	{
		printf("YOU AIN'T GET YOU INPUT BKASE TOO CLOSE\n");
	}
	else if(argc>5)
	{
		printf("Sheet mang, you done.\n");
	}
	else
	{
		int i = 1;
		while(i<argc)
		{
			printf("Take it back: %s\n", argv[i]);
			i++;
		}
		
	}
	return 0;
}