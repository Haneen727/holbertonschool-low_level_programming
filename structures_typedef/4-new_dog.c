#include "dog.h"
#include <stdlib.h>

/**
 * copy_str - creates a copy of a string
 * @s: the string to copy
 *
 * Return: pointer to the copy, or NULL on failure
 */
static char *copy_str(char *s)
{
	char *copy;
	int len, i;

	if (s == NULL)
		return (NULL);

	for (len = 0; s[len] != '\0'; len++)
		;

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = s[i];

	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog (copied)
 * @age: age of the dog
 * @owner: owner of the dog (copied)
 *
 * Return: pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = copy_str(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = copy_str(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}
