#include <stdio.h>

static int ternarios(int i, int j)
{
	return ((i < j) ?  (printf("hola\n"), printf("me duelen los webos de tocarmelos\n"), 1) : 0);
}

int main()
{
	printf("%d\n", ternarios(20,84));
	return 0;
}
