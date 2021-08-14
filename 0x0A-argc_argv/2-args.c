#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */

int main(int argc, char const *argv[])
{
int i = 0;

while (argc--)
{
	printf("%s\n", argv[i]);
	i++;
}

return (0);
}
