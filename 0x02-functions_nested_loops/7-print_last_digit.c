#include "holberton.h"

/**
 * print_last_digit - computes the absolute value of int
 * @digit: number to be considered
 * Return: res
 */

int print_last_digit(int digit)
{
	int res;

	if (digit < 0)
	{
		digit = (digit * -1);
	}
	res = digit % 10;

	if (res < 0)
	{
		res = res * -1;
	}
	_putchar('0' + res);
	return (res);
}
