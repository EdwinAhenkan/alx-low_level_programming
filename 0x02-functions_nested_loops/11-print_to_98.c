#include <stdio.h>

/**
 * print_t-_98 - Prints all natural numbers from input to 98
 * @n: The Starting numbe
 *
 * Description: The function takes an integer 'n' and prints
 * all numbers starting from 'n' to 98. It can handle both
 * sequences depending on the value of 'n'
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
