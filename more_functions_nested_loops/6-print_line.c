#include <stdio.h>
#include "main.h"
/**
 * print_line(int n) - prints in a straight line
 *
 * Return: void
 *
 *@n: perameter
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			_putchar('_');
		_putchar('\n');
	}
}
