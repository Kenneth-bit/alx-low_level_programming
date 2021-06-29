#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Always Failure)
 */
int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int c;

	for (c = 0; q[c] != '\0'; c++)
	{
		putchar(q[c]);
	}
	putchar('\n');
	return (1);
}
