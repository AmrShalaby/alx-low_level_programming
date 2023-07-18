#include "dog.h"
/*
 * free_dog - Frees a dog struct
 *
 * @d: Pointer to the dog struct
 *
 * Description:
 * This function frees all the memory that was allocated for a dog struct.
 *
 */

void free_dog(dog_t *d) {
  /* Check if the pointer is NULL. */
  if (d == 0) return;

  /* Free the memory for the dog's name. */
  if (d->name) free(d->name);

  /* Free the memory for the dog's owner. */
  if (d->owner) free(d->owner);

  /* Free the dog struct itself. */
  free(d);
}
