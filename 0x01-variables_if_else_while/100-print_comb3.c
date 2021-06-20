#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * description - Prints all base 10 single digits combos
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int dig;

	for (num = 48; num <= 56; num++)
	{
		for (dig = 48; dig <= 57; dig++)
		{
			if (num > dig)
			{
				putchar(num);
				putchar(dig);

				if (num != 56 || dig != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
