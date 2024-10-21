#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	#define PRINTSIZEA(Type) printf("Size of a " #Type ": %zu byte(s)\n", sizeof(Type))
	#define PRINTSIZEAN(Type) printf("Size of an " #Type ": %zu byte(s)\n", sizeof(Type))
	PRINTSIZEA(char);
	PRINTSIZEA(long int);
	PRINTSIZEA(long long int);
	PRINTSIZEA(float);
	PRINTSIZEAN(int);
	return (0);
}
