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

	for (num = 0; num < 100; num++)
	{
		for (dig = 0; dig < 100; dig++)
		{
			if (dig > num)
			{
				putchar((num / 10) + 48);
				putchar((num % 10) + 48);
				putchar(' ');
				putchar((dig / 10) + 48);
				putchar((dig % 10) + 48);

				if (num != 98 || dig != 99)
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
