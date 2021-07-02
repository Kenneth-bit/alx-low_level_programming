#include "holberton.h"

/**
 * print_last_digit - computes the absolute value of int
 * @n: number to be considered
 * Return: the last digit of n
 */

int print_last_digit(int n)
{

	int digit;

	if (n <= 0)
	{
		digit = (n * -1) % 10;
	}
	else if (n >= 0)
	{

		digit = n % 10;
	}
	_putchar(digit);
	return (digit);
}
