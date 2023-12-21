#include <stdio.h>
#include "ops.h"


int main(void)
{
	int x = 10, y = 2;

	printf(" %d + %d = %d \n", x, y, add(x,y));
	printf(" %d - %d = %d \n", x, y, subtract(x,y));
	printf(" %d * %d = %d \n", x, y, multiply(x,y));
	printf(" %d / %d = %lf \n", x, y, divide(x,y));
	printf(" %d mod %d = %d \n", x, y, modulus(x,y));

	return 0;
}
