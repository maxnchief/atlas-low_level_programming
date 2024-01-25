#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints the numbers
 *
 * Return:0
 */

void print_numbers(void)
{
	int c;

	c = 48;

	while (c >= 48 && c <= 57)
	{
		_putchar (c);
		(c++);
	}
	_putchar ('\n');

}
