#include "main.h"
/**
 * main - prints the numbers from 1 to 100,
 * followed by a new line.
 * description
 * But for multiples of three print Fizz instead of the number
 * and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five
 * print FizzBuzz
 *
 * no input
 * 
 * Return: 1..100 
 */
int main()
{
int i, modulo_three, modulo_five;
for (i = 1; i <= 100 ; i++)
{
modulo_three = i % 3;
modulo_five = i % 5;
if (modulo_three == 0 && modulo_five == 0)
{
printf("FizzBuzz ");
continue;
}
else if (modulo_three == 0 && modulo_five != 0)
{
printf("Fizz ");
continue;
}
else if (modulo_three != 0 && modulo_five == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
if (i == 100)
{
printf("\n");
}
}
return (0);
}
