#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * description - Prints the alphabet in lowercase, reversed
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);
	putchar('\n');

	return (0);
}
