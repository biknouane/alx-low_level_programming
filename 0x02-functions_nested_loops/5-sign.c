#include <stdio.h>

/**
  * print_sign - prints the sign of number
  * @n: the number to be checked
  *
  * Return: 1 or -1 or 0
  */
int print_sign(int n)
{
	if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		putchr('+');
		return (1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
