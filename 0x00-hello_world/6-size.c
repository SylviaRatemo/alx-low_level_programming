#include <stdio.h>

/**
 * Main - Entry
 * Return:Always 0
 */

int main(void)
{
	int i;
	char c;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(li));
	printf("Size of a long long int: %d byte(s)\n", sizeof(lli));
	printf("Size of a float: %d byte(s)\n", sizeof(f));

	return (0);
}
