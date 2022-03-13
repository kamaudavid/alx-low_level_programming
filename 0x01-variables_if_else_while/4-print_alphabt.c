#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e')
		{
			c++;
		}
		else if (c == 'q')
		{
			c++;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
