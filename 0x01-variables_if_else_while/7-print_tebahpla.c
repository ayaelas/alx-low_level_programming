#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char e;

	for (e = 'z'; e >= 'a'; e--)
	{
		putchar(e);
	}
	putchar('\n');
	return (0);
}


