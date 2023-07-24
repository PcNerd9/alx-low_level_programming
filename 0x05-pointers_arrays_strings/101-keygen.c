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
	int i;
	char *characters = "0123456789 abcdefghijklmnopgrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ !@#$%^&*()";
	int no_of_pwd;
	char password[20];

	srand(time(NULL));
	no_of_pwd = rand() % 20;
	for (i = 0; i < no_of_pwd; i++)
	{
		password[i] = characters[rand() % 72];
	}
	password[no_of_pwd] = '\0';
	return (0);
}
