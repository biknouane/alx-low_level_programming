#include <stdio.h>

/**
  * main - entry point of our program
  *
  * Return: always 0 (secusses)
  */
int main(void)
{
	int sum;
	int i = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
			i++;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
