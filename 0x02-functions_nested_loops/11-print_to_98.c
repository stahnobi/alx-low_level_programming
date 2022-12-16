#include "stdio.h"

/**
 * print_to_98 - Prints numbers to 98, separated by a comma and by a space.
 * @n: Number to begin at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
