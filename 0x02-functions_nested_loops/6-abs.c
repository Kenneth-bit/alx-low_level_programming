#include "holberton.h"

/**
 * _abs - computes the absolute value of int
 * @n: number to be computed
 * Return: the absolute value of n
 */

int _abs(int n)
{
	int res;

	if (n < 0)
	{
		res = n * -1;
	}
	else
	{
		res = n;
	}
	return (res);
}
