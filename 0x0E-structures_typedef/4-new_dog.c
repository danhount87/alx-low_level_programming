#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/* @zinzinpolice */
/**
 * new_dog - function that creates a new dog
 * @name: pointer of the dog's name
 * @age: pointer of the dog's age
 * @owner: pointer of his owner
 * Return: newdogidentity
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int j = 0, h = 0, m;
	dog_t *NdogI;

	while (name[j] != '\0')
		j++;
	while (owner[h] != '\0')
		h++;
	NdogI = malloc(sizeof(dog_t));
	if (NdogI == NULL)
	{
		free(NdogI);
		return (NULL);
	}
	NdogI->name = malloc(j * sizeof(NdogI->name));
	if (NdogI->name == NULL)
	{
		free(NdogI->name);
		free(NdogI);
		return (NULL);
	}
	for (m = 0; m <= j; m++)
		NdogI->name[m] = name[m];
	NdogI->age = age;
	NdogI->owner = malloc(h * sizeof(NdogI->owner));
	if (NdogI->owner == NULL)
	{
		free(NdogI->owner);
		free(NdogI->name);
		free(NdogI);
		return (NULL);
	}
	for (m = 0; m <= h; m++)
		NdogI->owner[m] = owner[m];
	return (NdogI);
}
