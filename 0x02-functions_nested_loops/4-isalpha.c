#include "main.h"
/**
 * isalpha - function to check if
 *          character is lowercase or uppercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is lowercase or uppercase
 *          otherwise always 0 (Success)
*/

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}
