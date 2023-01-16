#include "dog.h"
/* @zinzinpolice */
/**
 * init_dog - function that initialize
 * a variable of type struct dog.
 * @d: pointer to struct dog's type
 * @name: pointer to char to be initialized
 * @age: the dog's age to initialized
 * @owner: pointer to char to be initialized
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
