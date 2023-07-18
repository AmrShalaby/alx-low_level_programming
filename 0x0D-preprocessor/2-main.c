#include <stdio.h>

/**
 * Prints the name of the file it was compiled from.
 *
 * @return 0 on success.
 */
int main(void) {
  char *file_name = __FILE__;

  /* Betty style: Indent each level by 4 spaces. */
  printf("%s\n", file_name);

  return 0;
}
