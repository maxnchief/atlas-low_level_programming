#include "main.h"
#include <stdio.h>

/**
 *_isupper - checks if the character is uppercase
 *
 *Return: 1 or 0
 *
 * @c: funciton perameter
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
