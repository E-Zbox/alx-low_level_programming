#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always (0)
 */
int main(void)
{
    /** 0-malloc_checked.c
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);

    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);

    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);

    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);

    free(c);
    free(i);
    free(f);
    free(d);
    */

    /** 1-string_nconcat.c*/
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);

    return (0);
}