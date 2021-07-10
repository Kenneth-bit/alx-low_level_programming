#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * description - Prints 3 digit combos
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	int dig;
	int last;

	for (num = 48; num < 58; num++)
	{
		for (dig = 49; dig < 58; dig++)
		{
			for (last = 50; last < 58; last++)
			{
				if (last > dig && dig > num)
				{
					putchar(num);
					putchar(dig);
					putchar(last);

					if (num != 55 || dig != 56)
					{
						putchar(',');
						putchar(' ');
				}
			}
		}
	}
}
	putchar('\n');

	return (0);
}
