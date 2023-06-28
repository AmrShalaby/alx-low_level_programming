#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * fcounter is to first count to end, n is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
 int i =0;

 while (s[i])
i++;

 while (i--)
 {
_putchar(s[i]);
 }
	_putchar('\n');
}
