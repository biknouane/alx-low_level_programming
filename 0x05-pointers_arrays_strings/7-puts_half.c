#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: the string
  *
  * Return: void
  */
void puts_half(char *str)
{
	int length;
	int half;

	while (*(str + length) != 0)
		length++;
	length--;
	half = length / 2;
	while (*(str + half) != 0)
	{
		_putchar(*(str + half));
		half++;
	}
	_putchar('\n');
}
