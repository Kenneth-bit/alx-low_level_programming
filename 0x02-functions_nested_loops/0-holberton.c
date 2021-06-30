#include "holberton.h"

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
