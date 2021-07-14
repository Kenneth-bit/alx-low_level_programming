#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

/**
  * positive_or_negative - prints if integer is postive or negative
  * @i: integer to be tested
  * Return - void
  */
void positive_or_negative(int i);

/**
  * largest_number - returns largest of 3 numbers
  * @a, @b, @c: integers to be checked
  * Return - largest of the three integers
  */
int largest_number(int a, int b, int c);
/**
  * print_remaining_days - takes a date and prints how many days are
  * left in the year, taking leap years into account
  * Return - void
  */
void print_remaining_days(int month, int day, int year);
int main(void);
int convert_day(int month, int day);
#endif /* HOLBERTON_H */
