#include <stdio.h>

/** 
 * main - main function
 *
 * Return: 0 returns value
 *
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("size of a float: %lu bytes(s)", sizeof(float));
	return (0);
}
