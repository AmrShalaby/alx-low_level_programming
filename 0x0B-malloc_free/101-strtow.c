#include "main.h"
/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
int i, count = 0;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
}

return (count);
}

/**
* strtow - Splits a string into words.
* @str: The input string.
*
* Return: A pointer to an array of strings (words), or NULL on failure.
*/
char **strtow(char *str)
{
char **words;
int i, j, k, count, len;

if (str == NULL || *str == '\0')
return (NULL);

count = count_words(str);
if (count == 0)
{
words = malloc(sizeof(char *));
if (words == NULL)
return (NULL);
words[0] = NULL;
return (words);
}

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
