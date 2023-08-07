#include <stdio.h>


int no_of_words(char *str)
{
	int no_words  = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] != ' ')
			no_words++;
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			no_words++;
	}
	return (no_words);	
}	

int main(int argc, char *argv[])
{
	int no_words = no_of_words("     I am        going    to   be one of the best software engineer in the word       ;");
	printf("%d\n", no_words);

	return (0);
}	
