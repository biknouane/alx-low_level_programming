#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: the string
  * @c: the character
  *
  * Return: pointer to the first accurrence of the character c
  */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		if (*(s + i) == c)
			break;
		i++;
	}
	return (s + i);
}
