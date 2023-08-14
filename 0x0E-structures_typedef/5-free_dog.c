#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory allocated for the new dog created
 *@d: a pointer to the memory allocation to free
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	free(d);
}
