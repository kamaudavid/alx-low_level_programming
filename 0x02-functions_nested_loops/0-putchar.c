#include <stdio.h>
/**
 * _putchar - the function thta prints the _putchar
 *
 * main - where the execution of the program begins
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _putchar(void);
int main(void)
{
	_putchar();
	return (0);
}
void _putchar(void)
{
	printf("_putchar\n");
}
