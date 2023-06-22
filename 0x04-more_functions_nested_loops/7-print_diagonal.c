#include "main.h"
/**
 * print_line - print line
 *@n: is input how '_' do you need to print
 * Return: _ n numbers
 */
void print_diagonal(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar(' ');
if ( i == n-1 )
_putchar('\\');
}
_putchar('\n');
}
}
