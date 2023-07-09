#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings containing the arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
    int i, sum = 0;

    if (argc == 1) /* Check if no arguments are passed */
    {
        printf("0\n");
        return 0;
    }

    for (i = 1; i < argc; i++) /* Loop through all arguments */
    {
        int j;
        for (j = 0; argv[i][j] != '\0'; j++) /* Loop through each character of the argument */
        {
            if (!isdigit(argv[i][j])) /* Check if the character is not a digit */
            {
                printf("Error\n");
                return 1;
            }
        }
        sum += atoi(argv[i]); /* Convert the argument to integer and add it to the sum */
    }

    printf("%d\n", sum); /* Print the sum */

    return 0;
}
