#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * user input's number prints to 98
 * @n: number input
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{

	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar('0' + n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else
	{
		_putchar('0' + '9');
		_putchar('0' + '8');
	}
	_putchar('\n');
}

