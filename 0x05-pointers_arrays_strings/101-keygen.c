#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *
 *
 *
 *
 */

char * main(void)
{
	srand(time(NULL));
	int i;
	char *characters = "0123456789 abcdefghijklmnopgrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ !@#$%^&*()";
	int no_of_pwd = rand() % 20;
	char *password[no_of_pwd];

	for ( i = 0; i < no_of_pwd; i++)
	{
		password[i] = characters[rand() % 72]
	}
	return (password)
}
