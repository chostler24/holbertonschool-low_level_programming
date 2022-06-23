#include "dog.h"

/**
  * _strcopy - function that copies a string pointed to by src.
  * @dest: buffer
  * @src: source string
  * Return: dest
  */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
	{
		dest[index] = src[index];
	}

	dest[index] = '\0';

	return (dest);
}

/**
  * new_dog - function that creates a new dog.
  * @name: of dog
  * @age: of dog
  * @owner: of dog
  * Return: new dog structure
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bella;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	bella = malloc(sizeof(dog_t));
	if (bella == NULL)
	{
		return (NULL);
	}
	bella->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (bella->name == NULL)
	{
		free(bella);
		return (NULL);
	}
	bella->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (bella->owner == NULL)
	{
		free(bella->name);
		free(bella);
		return (NULL);
	}
	bella->name = _strcopy(bella->name, name);
	bella->age = age;
	bella->owner = _strcopy(bella->owner, owner);

	return (bella);
}
