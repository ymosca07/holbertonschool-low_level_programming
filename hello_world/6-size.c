#include <stdio.h>

int	main(void)
{
	#define PRINTSIZEA(Type) printf("Size of a " #Type " is %zu\n", sizeof(Type))
	#define PRINTSIZEAN(Type) printf("Size of an " #Type " is %zu\n", sizeof(Type))
	PRINTSIZEA(char);
	PRINTSIZEA(long int);
	PRINTSIZEA(long long int);
	PRINTSIZEA(float);
	PRINTSIZEAN(int);
	return (0);
}
