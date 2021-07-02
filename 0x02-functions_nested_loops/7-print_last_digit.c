#include "holberton.h"

/**
 * print_last_digit - computes the absolute value of int
 * @digit: number to be considered
 * Return: the last digit of n
 */

int print_last_digit(int digit)
{

	if (digit <= 0)
	{
		digit = (digit * -1) % 10;
		_putchar('0' + digit);
	}
	else if (digit >= 0)
	{

		digit = digit % 10;
		_putchar('0' + digit);
	}
	return (digit);
}
