#include <stdio.h>

/**
 * Prints the name of the file it was compiled from.
 *
 * @return 0 on success.
 */
int main(void) {

  printf("%s\n", __FILE__);
  return 0;
}
