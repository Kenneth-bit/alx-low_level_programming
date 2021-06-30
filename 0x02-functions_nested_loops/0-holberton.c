#include "holberton.h"
/**
 * main - Entry point
 * description - Prints Holberton
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "Holberton";
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');


	return (0);
}
