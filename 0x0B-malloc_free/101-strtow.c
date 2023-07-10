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
int i, j, k, count, len;

if (str == NULL || *str == '\0')
return (NULL);

count = count_words(str);
words = malloc(sizeof(char *) * (count + 1));
if (words == NULL)
return (NULL);

for (i = 0, j = 0; j < count; j++)
{
while (str[i] == ' ')
i++;

len = 0;
while (str[i + len] != ' ' && str[i + len] != '\0')
len++;

words[j] = malloc(sizeof(char) * (len + 1));
if (words[j] == NULL)
{
for (k = 0; k < j; k++)
    free(words[k]);
free(words);
return (NULL);
}

for (k = 0; k < len; k++)
words[j][k] = str[i + k];
words[j][k] = '\0';

i += len;
}

words[count] = NULL;
return (words);
}

