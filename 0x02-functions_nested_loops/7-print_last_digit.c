#include <stdio.h>

/**
  * print_last_digit - prints the last digit of a number
  * @n: the num to print
  *
  * Return: the last number
  */
int print_last_digit(int n)
{
	int num;

	if (n < 0)
		num = n * -1;
	else
		num = n;
	while (num >  10)
		num = num % 10;
	putchar (num);
	return (num);
}
