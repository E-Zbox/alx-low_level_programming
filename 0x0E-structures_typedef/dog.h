#ifndef DOG
#define DOG

/**
 * struct dog - define a new type struct dog
 * @name: char *
 * @age: float
 * @owner: char *
 *
 * Description: longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/** void print_dog(struct dog *d); */

typedef struct dog dog_t;

#endif
