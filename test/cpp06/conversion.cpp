#include <iostream>
#include <stdio.h>

void	dump_32bits_integer(int const n){
	printf("[   \t%d]: ", n);
	for (int i = 32; i > 0; i--){
		if ((n>>i)&1)
			printf("1");
		else
			printf("0");
		if (i % 8 == 0 && i != 32)
			printf(" ");
	}
	printf("\n");
}
void	dump_64bits_double(double const z){
	printf("[ %f]: ", z);
	for (int i = 64; i > 0; i--){
		if (((z >> i) & 1)
			printf("1");
		else
			printf("0");
		if (i  == 1 || i == 9)
			printf(" ");
	}
	printf("\n");
}

int main(void){
	int	a = 42;

	double b = a;
	double c = (double) a;

	double d = a;
	int e = d;
	int f = (int) d;

	dump_32bits_integer( a );

	dump_64bits_double( b );
	dump_64bits_double( c );
	
	dump_64bits_double( d );
	dump_32bits_integer( e );
	dump_32bits_integer( f );
	return 0;
}
