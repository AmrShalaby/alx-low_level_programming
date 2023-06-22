#include "main.h"
/**
*print_most_numbers- function that print 0..9 avoid 2 or 4
*
*Return: returns 0356789
*/
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i == 4 || i == 2)
continue;
else
_putchar(i + '0');
}
}



