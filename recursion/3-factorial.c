#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial
 * @n: parameter
 * Return: 1 or (-1) or the factorial
 */
int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
