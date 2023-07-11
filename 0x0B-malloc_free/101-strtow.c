#include "main.h"
#include <ctype.h>
/**
 * strtow - Splits a string into words.
 *
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if str is NULL,
 * empty, or contains only spaces.
 */
char **strtow(char *str)
{
    if (str == NULL || strlen(str) == 0 || strcmp(str, " ") == 0)
        return (NULL);

    char *word = NULL;
    int word_i = 0;
    char **words = (char **) malloc((strlen(str) + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    int words_i = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isspace(str[i]))
        {
            if (word != NULL)
            {
                word[word_i] = '\0';
                words[words_i++] = word;

                word = NULL;
                word_i = 0;
            }
        }
        else
        {
            if (word == NULL)
            {
                word = (char *) malloc((count_chars(str + i) + 1) * sizeof(char));
                if (word == NULL)
                {
                    for (int j = 0; j < words_i; j++)
                        free(words[j]);
                    free(words);
                    return (NULL);
                }
            }
            word[word_i++] = str[i];
        }
    }

    if (word != NULL)
    {
        word[word_i] = '\0';
        words[words_i++] = word;

        word = NULL;
        word_i = 0;
    }

    words[words_i] = NULL;
    return (words);
}

/**
 * count_chars - Counts the number of non-space characters in a string.
 *
 * @str: The string to count.
 *
 * Return: The number of non-space characters in the string.
 */
int count_chars(char *str)
{
    int count = 0;
    while (*str != '\0' && !isspace(*str))
    {
        count++;
        str++;
    }
    return (count);
}
