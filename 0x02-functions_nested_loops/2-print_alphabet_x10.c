#include "holberton.h"
/**
 * print_alphabet - Prints the lowercase alphabet 10 times
 * Return: Always void (Success)
 */


void print_alphabet_x10(void)
{
	int c = 0;
	char alph;

	for (c = 0; c <= 9; c++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
