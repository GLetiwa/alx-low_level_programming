#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog(Success), NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}

/**
 * _strdup - duplicates a string
 * @s: string to be duplicated
 *
 * Return: pointer to the newly duplicated string
 */
char *_strdup(char *s)
{
	char *dup_s;
	int len, i;

	if (s == NULL)
		return (NULL);
	len = strlen(s);
	dup_s = malloc((len + 1) * sizeof(char));
	if (dup_s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup_s[i] = s[i];
	dup_s = '\0';
	return (dup_s);
}

/**
 * _strlen - calculates the length of a string
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
