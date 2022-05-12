#ifndef MAIN
#define MAIN

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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
