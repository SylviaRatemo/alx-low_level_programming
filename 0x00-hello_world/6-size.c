#include <stdio.h>

/**
 * Main - start of program
 * Return - Always 0
 */

int main(void){
	int i;
	char c;
	long int li;
	long long int lli;
	float f;

	printf("Size of char: %d byte(s)", sizeof(c));
	printf("Size of an int: %d byte(s)", sizeof(i));
	printf("Size of a long int: %d byte(s)", sizeof(li));
	printf("Size of a long long int: %d byte(s)", sizeof(lli));
	printf("Size of a float: %d byte(s)", sizeof(f));

	return (0);
}
