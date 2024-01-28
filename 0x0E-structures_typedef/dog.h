#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Description: A structure for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
