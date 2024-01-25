#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * Return: 0 or 1\
 *
 * @c: the perameter
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
