#include "holberton.h"

/**
 * print_last_digit - computes the absolute value of int
 * @n: number to be considered
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int res;


	if (n < 0)
	{
		res = (n * -1) % 10;
		num = res;
	}
	else if (n > 0)
	{

		res = n % 10;
		num = res;
	}
	_putchar(num);
	return (res);
}
