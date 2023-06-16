#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y, x, l;

	for (y = 48; y < 58; y++)
	{
		for (x = 49; x < 58; x++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > x && x > y)
				{
					putchar(y);
					putchar(x);
					putchar(l);
					if (y != 55 || x != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

