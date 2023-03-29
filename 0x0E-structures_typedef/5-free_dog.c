#include<stdlib.h>
#include "dog.h"
/**
 * free_dog - a function that frees memory of a previously allocated
 * struct of dog
 * @d: pointer to dog struct
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
