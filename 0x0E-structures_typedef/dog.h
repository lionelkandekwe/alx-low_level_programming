#ifndef DOG
#define DOG

/**
 * struct dog - dog class
 *
 * @name: Name of the dog
 *
 * @age: Age of the dog
 *
 * @owner: Owner of the dog
 */
struct dog
{
	char *owner;
	char *name;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
