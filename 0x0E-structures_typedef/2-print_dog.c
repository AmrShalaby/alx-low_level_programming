#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the contents of a struct dog.
 * @d: Pointer to a struct dog.
 *
 * Description: This function prints the name, age, and owner of a struct dog.
 * If any of these members are NULL, it prints (nil) instead.
 *
 * Return: Nothing.
 */
void print_dog(dog_t *d)
{
    if (d == NULL)
        return;

    printf("Name: %s\n", d->name ? d->name : "(nil)");
    printf("Age: %.6f\n", d->age);
    printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
