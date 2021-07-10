#include "holberton.h"

/**
 * _isalpha - Checks if character is an alphabet
 * Return: 1 if is an alphabet
 * Otherwise return 0
 * @c: number passed into _islower
 */

int _isalpha(int c)
{
	int res;

	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	return (res);
}
