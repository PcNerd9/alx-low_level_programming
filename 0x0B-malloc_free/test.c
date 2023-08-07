#include <stdio.h>


int main(int argc, char *argv[])
{
	int i, j;
	int lenght = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			lenght++;
	}
	printf("lenght = %d\n", lenght);
	return (0);
}	
