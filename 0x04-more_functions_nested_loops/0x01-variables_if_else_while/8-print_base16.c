#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * description - Prints lowercase base16 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (num = 'a'; num <= 'f'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
