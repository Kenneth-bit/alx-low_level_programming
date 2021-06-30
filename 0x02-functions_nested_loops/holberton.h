#include <unistd.h>
/*
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/*
 * print_alphabet - prints the alphabet in lower case
 * Return : void
 */
void print_alphabet(void);
/*
 * print_alphabet_x10 - prints the alphabet in lower case 10 times
 * Return : void
 */
void print_alphabet_x10(void);
/*
 * _islower - checks for lower case character
 * @c: character to check
 * 
 * Return - Return if @c is lower case, otherwise return 0
 */
 int _islower(int c);
