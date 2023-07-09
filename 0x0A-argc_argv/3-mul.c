#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to strings containing the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
    int num1, num2;

    if (argc != 3) /* Check if two arguments are passed */
    {
        printf("Error\n");
        return 1;
    }

    num1 = atoi(argv[1]); /* Convert first argument to integer */
    num2 = atoi(argv[2]); /* Convert second argument to integer */

    printf("%d\n", num1 * num2); /* Multiply the two numbers and print the result */

    return 0;
}
