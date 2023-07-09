#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings containing the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++) /* Loop through all arguments */
    {
        printf("%s\n", argv[i]); /* Print each argument on a new line */
    }

    return 0;
}
