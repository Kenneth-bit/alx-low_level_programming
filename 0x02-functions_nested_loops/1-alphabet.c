#include "holberton.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 * Return: Always void (Success)
 */


void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
