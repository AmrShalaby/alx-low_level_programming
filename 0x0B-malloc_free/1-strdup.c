#include "main.h"


/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string,
 * or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
char *dup_str;

if (str == NULL)
return (NULL);

dup_str = malloc(sizeof(char) * (strlen(str) + 1));
if (dup_str == NULL)
return (NULL);

strcpy(dup_str, str);

return (dup_str);
}
