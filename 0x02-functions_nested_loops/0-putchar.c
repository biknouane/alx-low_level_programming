#include <stdio.h>

/**
  * main - the main entry of the program
  *
  * Return: Always 0 (secusess)
  */
int main(void)
{
	int i = 0;
	char arr[9] = "_putchar";

	while (i < 9)
	{
		putchar (arr[i]);
		i++;
	}
	putchar ('\n');
	return (0);
}
