#include "dog.h"
/**
 * init_dog - a function that initializes a dog with attributes
 * @d: user defined structure of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
