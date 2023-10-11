#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: pointer to the structure dog to initialize
 * @name: name to initialize
 * @age: age of dog
 * @owner: owner of dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
#endif
