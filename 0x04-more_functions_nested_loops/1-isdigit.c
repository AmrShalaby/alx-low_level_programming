#include "main.h"

/**
*_isdigit - function that verifies if a c is digit or not
*@c: tested character
*Return: returns 1 if it is digit , 0 if not
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}

