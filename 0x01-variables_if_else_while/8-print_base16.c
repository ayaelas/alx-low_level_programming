#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char x;

	for (a = 48; a < 58;a++)
	{
		putchar(a);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}


