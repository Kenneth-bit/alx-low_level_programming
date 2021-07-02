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
 * @r: stores the return of _islower in main.c
 * Return - Return 1 if @c is lower case, otherwise return 0
 */
int _islower(int c);
/*
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * @r: stores the return value of _isalpha
 * Return - 1 if @c is alpha, otherwise return 0
 */
int _isalpha(int c);
/*
 * print_sign - prints the sign of a number
 * @n: number to check
 * @r: stores the return value of _isalpha
 * Return - 1 if is positive, 0 if is zero and -1 if negative
 */
int print_sign(int n);
/**
  * _abs - computes the absolute value of an int
  * Return - the absolute value of a number
  */
int _abs(int);
/**
  * print_last_digit - prints the last digit of a number
  * Return - the value of the last digit
  */
int print_last_digit(int);
/**
 * jack_bauer - prints every minute of the day
 * Return - void
 */
void jack_bauer(void);
