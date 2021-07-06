#include "holberton.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result, n = number to be
 * printed
 * Return: n times table
 * add extra space past single digit
 */

void print_times_table(int n)
{
	int rone, cone, d;

	if (n > 0 && n <= 15)
	{
		for (rone = 0; rone <= n; rone++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (cone = 1; cone <= n; cone++)
			{
				d = (rone * cone);
				if ((d / 10) > 0)
				{
					_putchar((d / 10) + '0');
				}
				else
				{
					_putchar(' ');
				}
				_putchar((d % 10) + '0');

				if (cone < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else if (n = 0)
	{
		_putchar(0 + '0');
	}
}