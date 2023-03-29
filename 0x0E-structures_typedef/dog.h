#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a user defined structure with 3 members or attributes
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Description: A user defined data type of dog with 3 attributes or members
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for dog struct
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*End  of DOG_H file*/
