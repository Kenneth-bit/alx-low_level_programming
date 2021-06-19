#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * description - Prints all base 10 single digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 10; num++)
	{
		putchar(num);
	}

	return (0);
}
