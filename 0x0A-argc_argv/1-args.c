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
    printf("%d\n", argc - 1); /* Print the number of arguments */
    return 0;
}