#include "holberton.h"

/**
 * print_last_digit - computes the absolute value of int
 * @digit: number to be considered
 * Return: the last digit of n
 */

int print_last_digit(int digit)
{
	int res;

	if (digit < 0)
	{
		digit = -digit;
	}
	res = digit % 10;

	if (res < 0)
	{
		res = -res;
	}
	_putchar('0' + res);
	
	return (res);
}
