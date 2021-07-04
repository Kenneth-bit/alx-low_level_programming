#include "holberton.h"

/**
  * jack_bauer - function that prints every minute of the day
  * @hour: hours
  * @min: minutes
  * Return: void
  */

void jack_bauer(void)
{
	int hour = 0, min = 0;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
