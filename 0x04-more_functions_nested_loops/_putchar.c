#include <unistd.h>
#include "main.h"
/**
 * _putchar - wirtes the character c to stdout
 * c: The character to print
 *
 * description 'c' c is a character
 *
 * Return: on success 1.
 *         on error. -1 is returned. an error is set appropriately
 *
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}
