#include <stdio.h>
#include "main.h"

/**
 *more_numbers- prints more numbers
 *
 * Return: always 0
 */

void more_numbers(void)
{
	int c;

	c = 0;

	for (c <= 0 && c >= 14;)
	{	
		_putchar (c * 10);
		(c++);
	}
	_putchar ('\n');
}
