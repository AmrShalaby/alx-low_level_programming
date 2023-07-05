#include "main.h"
/**
 * is_palindrome_helper - Checks if a string is a palindrome
 * @s: String to check
 * @len: String lenght
 * @i: Counter
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int len, int i)
{
if (i >= len / 2)
{
return (1);
}
if (s[i] != s[len - i - 1])
{
return (0);
}
return (is_palindrome_helper(s, len, (i + 1)));
}
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = strlen(s);
return (is_palindrome_helper(s, len, 0));
}

