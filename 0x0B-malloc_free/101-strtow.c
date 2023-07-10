#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings, or NULL on failure
 */
char **strtow(char *str)
{
char **words;
int i, j, k, len, count;

if (str == NULL || *str == '\0')
return (NULL);

len = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
len++;
}

words = malloc(sizeof(char *) * (len + 1));
if (words == NULL)
return (NULL);

count = 0;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
;
words[count] = malloc(sizeof(char) * (j - i + 1));
if (words[count] == NULL)
{
for (k = 0; k < count; k++)
free(words[k]);
free(words);
return (NULL);
}
for (k = 0; i < j; k++, i++)
words[count][k] = str[i];
words[count][k] = '\0';
count++;
}
}
words[count] = NULL;

return (words);
}
