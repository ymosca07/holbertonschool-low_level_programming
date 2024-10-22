#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */

int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;

	printf("Last digit of ");
	printf("%d", n);
	printf(" is ");
	printf("%d", d);

	if (d > 5)
	puts(" and is greater than 5");

	if (d == 0)
	puts(" and is 0");

	if (d < 6 && d != 0)
	puts(" and is less than 6 and not 0");

	return (0);
}
