#include <stdio.h>

/**
  * _islower - checks for lowercase
  *
  * Return: 1 if the character is lower or 0 if not
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
