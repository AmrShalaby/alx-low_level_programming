#include "main.h"
/**
 * more_numbers - a function that prints the numbers
 * from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by new line
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
}
_putchar('\n');
}

}




