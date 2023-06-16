#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a,z;

	for (a = 0; ai < 100; a++)
	{
		for (z = 0; z < 100; z++)
		{
			if (a < z)
			{
				putchar((a / 10) + 48);
				putchar((ai % 10) + 48);
				putchar(' ');
				putchar((z / 10) + 48);
				putchar((z % 10) + 48);
				if (a != 98 || z != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
