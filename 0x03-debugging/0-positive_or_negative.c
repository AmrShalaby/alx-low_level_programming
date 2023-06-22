#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - entery point
*
* Description: false or true validation
*
* Return :0 (success)
*/
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
}
