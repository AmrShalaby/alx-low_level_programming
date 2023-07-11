#include "main.h"
/**
 * count_words - Counts the number of words in a string.
 *
 * @str: The string to count words in.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
    int i, num = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (*str == ' ')
            str++;
        else
        {
            for (; str[i] != ' ' && str[i] != '\0'; i++)
                str++;
            num++;
        }
    }

    return num;
}

/**
 * free_words - Frees the memory allocated for a string array.
 *
 * @words: The string array to free.
 * @num_words: The number of words in the array.
 */
void free_words(char **words, int num_words)
{
    for (; num_words > 0; num_words--)
        free(words[num_words - 1]);
    free(words);
}

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
    int num_words = 0;
    int word_i = 0;
    int char_i = 0;
    int word_len = 0;
    char **words;
    char *word_start;

    if (str == NULL || *str == '\0')
        return NULL;

    num_words = count_words(str);
    if (num_words == 0)
        return NULL;

    words = malloc((num_words + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    for (; *str != '\0' && word_i < num_words; )
    {
        if (*str == ' ')
            str++;
        else
        {
            word_start = str;
            for (; *str != ' ' && *str != '\0'; )
            {
                word_len++;
                str++;
            }

            words[word_i] = malloc((word_len + 1) * sizeof(char));
            if (words[word_i] == NULL)
            {
                free_words(words, word_i);
                return NULL;
            }

            while (*word_start != ' ' && *word_start != '\0')
            {
                words[word_i][char_i] = *word_start;
                word_start++;
                char_i++;
            }

            words[word_i][char_i] = '\0';
            word_i++;
            char_i = 0;
            word_len = 0;
            str++;
        }
    }

    words[word_i] = NULL;
    return words;
}
