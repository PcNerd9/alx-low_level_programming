#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - compute the lenght of a string
 * @s: a pointer to the string
 *
 * Return: the lenghtof the string
 */

int _strlen(char *s)
{
	int i;
	int lenght = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		lenght++;
	}
	return (lenght);
}

/**
 * _strcpy - copy all the element in one location to another location
 * @des: a pointer to the destination
 * @src: a pointer tot he source location
 *
 * Return: a pointer to the destination location
 */

char *_strcpy(char *des, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		des[i]  = src[i];
	}
	des[i]   = '\0';
	return (des);
}

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
	create_dog->name = (char *)malloc(sizeof(char)*(_strlen(name) + 1));
	if (create_dog->name == NULL)
	{
		free(create_dog);
		return (NULL);
	}

	_strcpy(create_dog->name, name);
	(*create_dog).age = age;

	create_dog->owner = (char *)malloc(sizeof(char) * (_strlen(name) + 1));
	if (create_dog->owner == NULL)
	{
		free(create_dog->name);
		free(create_dog);
		return (NULL);
	}
	_strcpy(create_dog->owner, owner);
	return (create_dog);
}
