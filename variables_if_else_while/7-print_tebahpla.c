#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	write(1, "zyxwvutsrqponmlkjihgfedcba\n", 27);
	return (0);
}
