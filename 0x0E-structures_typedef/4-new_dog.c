#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with dynamically allocated memory.
 * @name: Pointer to a string representing the dog's name.
 * @age: The dog's age as a float.
 * @owner: Pointer to a string representing the dog's owner.
 *
 * Description: This function creates a new dog with dynamically allocated memory
 * for its name and owner. If memory allocation fails, the function returns NULL.
 *
 * Return: Pointer to a new dog_t struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL) {
        return NULL;
    }

    new_dog->name = malloc(strlen(name) + 1);
    if (new_dog->name == NULL) {
        free(new_dog);
        return NULL;
    }
    strcpy(new_dog->name, name);

    new_dog->owner = malloc(strlen(owner) + 1);
    if (new_dog->owner == NULL) {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }
    strcpy(new_dog->owner, owner);

    new_dog->age = age;

    return new_dog;
}
