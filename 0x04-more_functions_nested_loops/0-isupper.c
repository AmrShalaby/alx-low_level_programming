#include "main.h"

/**
*_isupper - function that verifies if a  character is uppercase or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/
int _isupper(char c)
{
if(c >= 'a' && c <= 'z')
{
//printf("Number is lowercase");
return (1);
}
else if(c >= 'A' && c <= 'Z')
{
//printf("Number is uppercase");
return (0);
}
}
