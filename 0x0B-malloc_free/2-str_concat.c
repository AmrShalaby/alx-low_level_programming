#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concat_str;
unsigned int s1_len, s2_len, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

s1_len = strlen(s1);
s2_len = strlen(s2);

concat_str = malloc(sizeof(char) * (s1_len + s2_len + 1));
if (concat_str == NULL)
return NULL;

for (i = 0; i < s1_len; i++)
concat_str[i] = s1[i];

for (j = 0; j < s2_len; j++)
concat_str[i + j] = s2[j];

concat_str[i + j] = '\0';

return concat_str;
}
