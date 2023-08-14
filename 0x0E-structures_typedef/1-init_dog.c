#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to the variable of type struct dog
 *@name: the value to initialize the name member to
 * @age: the value to initialize the age member to
 * @owner: the value to initialize the owner to
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d->name == NULL)
		d->name = "(nil)";
	else
		(*d).name = name;
	
	(*d).age = age;

	if (d->owner == NULL)
		d->owner = "(nil)";
	else
		d->owner =  owner;
}
