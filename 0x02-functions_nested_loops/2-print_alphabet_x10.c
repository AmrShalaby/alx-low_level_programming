#include "main.h"
/**
 * description Print_alphabet 10x - function that will print the alphabet
 * 10 times
*/

void print_alphabet_x10(void)
{
    int line, ch;
    for (line = 0; line <= 9; line++)
    {
        for (ch = 'a'; ch <= 'z'; ch++)
        {
           _putchar(ch);
        }
        _putchar('\n');
    }
}


