#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - is a put function
 *@s: parameter
 * return: void
 */

void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}

