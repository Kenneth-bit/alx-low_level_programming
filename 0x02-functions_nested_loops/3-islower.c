#include "holberton.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 * Return: 1 if c is lowercase
 * otherwise return 0
 */

int _islower(int c)
{
	int res;

	if (c >= 'a' && c <= 'z')
	{
		res = 1;
	}
	else if (c >= 'A' && c <= 'z')
	{
		res = 0;
	}
	
	return (res);
}
