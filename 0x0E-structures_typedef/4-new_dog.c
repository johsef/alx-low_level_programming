#include "dog.h"
/**
 * new_dog - a function that creates a new dog
 * @name: pointer to name of dog struct
 * @age: age of dog struct
 * @owner: pointer to name of owner
 *
 * Return: pointer to newly defined user struct
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
