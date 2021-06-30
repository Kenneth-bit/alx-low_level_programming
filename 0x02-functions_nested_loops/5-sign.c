#include "holberton.h"

/**
 * print_sign - Checks the sign of the number
 * Return: 1 it is positive, 0 if zero and -1 if negative
 * @n: number passed into print_sign
 */

int print_sign(int n)
{
	int res;
	char sign;

	if (n == 0)
	{
		sign = '0';
		res = 0;
	}
	else if (n > 0)
	{
		sign = '+';
		res = 1;
	}
	else if (n < 0)
	{
		sign = '-';
		res = -1;
	}
	_putchar(sign);
	return (res);
}
