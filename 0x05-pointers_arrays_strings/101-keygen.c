#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *
 *
 *
 *
 */

int main(void)
{
	srand(time(NULL));
	int i;
	char *characters = "0123456789 abcdefghijklmnopgrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ !@#$%^&*()";
	int no_of_pwd = rand() % 20;
	char password[20];

	for ( i = 0; i < no_of_pwd; i++)
	{
		password[i] = characters[rand() % 72];
	}
	printf("%s\n", password);
	return (0);
}
