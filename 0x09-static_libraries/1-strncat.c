#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c1, c2;

	c1 = 0;
	c2 = 0;

	while (dest[c1])
		c1++;

	while (src[c2] && c2 < n)
	{
		dest[c1] = src[c2];
		c1++;
		c2++;
	}

	dest[c1] = '\0';

	return (dest);
}
