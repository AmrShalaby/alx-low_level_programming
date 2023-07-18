#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct dog - a struct representing a dog
 * @name: pointer to a string representing the dog's name
 * @age: the dog's age as a float
 * @owner: pointer to a string representing the dog's owner
 *
 * Description: This struct represents a dog with a name, age, and owner.
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
