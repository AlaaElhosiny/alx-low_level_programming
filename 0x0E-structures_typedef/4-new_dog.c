#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: the pointer of the string
 * Return: int
 */
int _strlen(char *s)
{
	char *ptr = s;
	int count = 0;

	while (*(ptr + count) != '\0')
		count++;

	return (count);
}
/**
 * new_dog - creates a new dog
 * @name: struct dog
 * @age: int
 * @owner: string
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int i = 0;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	while (*(name + i) != '\0')
	{
		*(n_dog->name + i) = *(name + i);
		i++;
	}
	*(n_dog->name + i) = '\0';
	n_dog->age = age;
	n_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}
	i = 0;
	while (*(owner + i) != '\0')
	{
		*(n_dog->owner + i) = *(owner + i);
		i++;
	}
	*(n_dog->owner + i) = '\0';
	return (n_dog);
}
