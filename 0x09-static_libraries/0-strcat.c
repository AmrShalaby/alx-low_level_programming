#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int c1, c2;

	c1 = 0;
	c2 = 0;

	while (dest[c1])
		c1++;

	while (src[c2])
	{
		dest[c1] = src[c2];
		c2++;
		c1++;
	}

	return (dest);
}
