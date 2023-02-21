#include <stdio.h>

/**
  * jack_bauer - prints every minute of the day
  *
  * Retrun: void
  */
void jack_bauer(void)
{
	int i;
	int j;

	while (i <= 23)
	{
		while (j <= 59)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(':');
			putchar((j % 10) + 48);
			putchar((j % 10) + 48);
			putchar('\n');
			j++;
		}
		i++;
	}
}
