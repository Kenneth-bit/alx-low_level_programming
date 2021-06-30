#include "holberton.h"

/**
 * _islower - Checks if character is lowercase
 * Return: 1 if c is lowercase
 * otherwise return 0
 * r is used to store the result of _islower
 */

int _islower(int c)
{
	int res;

	if (c >= 'a' && c <= 'z')
	{
		res = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		res = 0;
	}
	return (res);
}
