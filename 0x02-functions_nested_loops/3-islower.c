#include "holberton.h"

/**
 * _islower - Checks if character is lowercase
 * Return: 1 if @c is lowercase
 * otherwise return 0
 * @c: number passed into _islower
 */

int _islower(int c)
{
	int res;

	if (c >= 'a' && c <= 'z')
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	return (res);
}
