#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - it creates a new dog from the struct dog
 *@name: the argument to initialize the new dog elements with
 *@age: the argument to initialize the ne dog with
 *@owner: the argument to initialize the new dog with
 *
 * Return: a pointe to the new dog created
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *create_dog;

	create_dog = (dog_t *)malloc(sizeof(dog_t));
	if (create_dog == NULL)
		return (NULL);
	create_dog->name = name;
	(*create_dog).age = age;
	create_dog->owner = owner;
	return (create_dog);
}
