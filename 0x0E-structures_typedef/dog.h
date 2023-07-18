#ifndef DOG_H
#define DOG_H

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

#endif /* DOG_H */
