#include "main.h"

/**
 * int_len - returns the number digits in an int
 * @n: integer to check len
 * Return: len of n
 */
int int_len(int n)
{
	if (n < 10)
		return (1);
	return (1 + int_len(n / 10));
}
