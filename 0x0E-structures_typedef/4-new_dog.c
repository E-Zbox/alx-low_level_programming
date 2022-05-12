#include <stdlib.h>
#include "dog.h"
#include "main.h"

/**
 * new_dog - creates a new dog
 * @name: char *
 * @age: float
 * @owner: char *
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char __attribute__((unused)) *name_copy = name;
	char __attribute__((unused)) *owner_copy = owner;

	dog_t *nkita = malloc(sizeof(dog_t));

	if (nkita == NULL)
		return (NULL);

	nkita->name = name;
	nkita->age = age;
	nkita->owner = owner;

	return (nkita);
}
