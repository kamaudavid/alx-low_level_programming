#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastdigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, lastdigit);
	if (lastdigit > 5)
		printf("and is greater than 5\n");
	else if (lastdigit == 0)
		printf("and is 0\n");
	else if (lastdigit < 6 && lastdigit != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
