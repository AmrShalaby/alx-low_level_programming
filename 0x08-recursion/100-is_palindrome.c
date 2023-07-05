#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s) {
    int i = 0, j = strlen(s)-1;

    while (i < j) {
        if (s[i++] != s[j--]) {
            return 0; // Not a palindrome
        }
    }

    return 1; // Palindrome
}
