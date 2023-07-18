#include "dog.h"
/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: pointer to a struct dog variable
 * @name: pointer to a string representing the dog's name
 * @age: the dog's age as a float
 * @owner: pointer to a string representing the dog's owner
 *
 * Description: This function initializes a struct dog variable with the given
 * name, age, and owner values.
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
