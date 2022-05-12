#include <stdio.h>
#include "dog.h"

/**
 * print_property - print the value passed
 * if NULL prints (nil)
 * @s: char *
 *
 * Return: void
 */
void print_property(char *s)
{
	if (s != NULL)
		printf("%s\n", s);
	else
		printf("(nil)\n");
}

/**
 * print_fproperty - print the value passed
 * if NULL prints (nill)
 * @d: float *
 *
 * Return: void
 */
void print_fproperty(float *d)
{
	if (d == NULL)
		printf("(nil)\n");
	else
		printf("%f\n", *d);
}

/**
 * print_dog - prints a struct dog
 * @d: struct dog *
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	printf("Name: ");
	print_property(d->name);
	printf("Age: ");
	print_fproperty(&(*d).age);
	printf("Owner: ");
	print_property(d->owner);
}
