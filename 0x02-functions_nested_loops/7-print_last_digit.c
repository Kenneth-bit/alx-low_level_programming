#include "holberton.h"

/**
 * print_last_digit - computes the absolute value of int
 * @n: number to be considered
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int res;
	int num;
	int digit = n;


	if (n < 0)
	{
		res = (digit * -1) % 10;
		num = '0' + res;
	}
	else if (n > 0)
	{

		res = digit % 10;
		num = '0' + res;
	}
	_putchar(num);
	return (res);
}
