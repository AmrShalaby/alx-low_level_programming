#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings containing the arguments
 *
 * Return: 0 if successful, 1 if an error occurred
 */
int main(int argc, char *argv[])
{
    int cents, coins = 0;

    if (argc != 2) /* Check if exactly one argument is passed */
    {
        printf("Error\n");
        return 1;
    }

    cents = atoi(argv[1]); /* Convert the argument to an integer */

    if (cents < 0) /* Check if the argument is negative */
    {
        printf("0\n");
        return 0;
    }

    while (cents > 0) /* Calculate the minimum number of coins needed */
    {
        if (cents >= 25)
        {
            cents -= 25;
            coins++;
        }
        else if (cents >= 10)
        {
            cents -= 10;
            coins++;
        }
        else if (cents >= 5)
        {
            cents -= 5;
            coins++;
        }
        else if (cents >= 2)
        {
            cents -= 2;
            coins++;
        }
        else
        {
            cents -= 1;
            coins++;
        }
    }

    printf("%d\n", coins); /* Print the minimum number of coins */

    return 0;
}

