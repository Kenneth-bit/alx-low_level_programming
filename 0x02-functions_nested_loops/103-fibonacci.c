#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms, followed by a new line
 * fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1, b = 2, r = 0, p = 2;

	while (r < 4000000)
		{
		r = a + b;
		a = b;
		b = r;

		if (r % 2 == 0)
			{
			p = r + p;
			}
		}
	printf("%d\n", p);
	return (0);
}
