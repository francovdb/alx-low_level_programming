#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - Entry Point
 * creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *nename, *neowner;
	int lename, leowner;

	dog_t *doggo = malloc(sizeof(dog_t));

	if (doggo == NULL)
		return (NULL);
	_strlen(name);
	lename = _strlen(name);
	nename = malloc((lename + 1) * sizeof(char));
	if (nename == NULL)
	{
		free(doggo);
		return (NULL);
	}
	_strcpy(nename, name);

	_strlen(owner);
	leowner = _strlen(owner);
	neowner = malloc((leowner + 1) * sizeof(char));
	if (neowner == NULL)
	{
		free(nename);
		free(doggo);
		return (NULL);
	}
	_strcpy(neowner, owner);

	doggo->name = nename;
	doggo->age = age;
	doggo->owner = neowner;

	return (doggo);
}

/**
 * _strlen - Entry Point
 * returns lenght of streing
 * @s: pointer
 * Return: 0
 */

int _strlen(char *s)
{
	int Cntr = 0;

	while (*s != '\0')
	{
		Cntr++;
		s++;
	}
	return (Cntr);
}

/**
 * _strcpy - entry Point
 * copies string
 * @src: source
 * @dest: destination
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int Cntr;

	for (Cntr = 0; src[Cntr]; Cntr++)
	{
		dest[Cntr] = src[Cntr];
	}
	dest[Cntr] = '\0';
	return (dest)
}
