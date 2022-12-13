#include <stdio.h>

/** 
 * main - entry
 * Return - always 0
 */

int main()
{
	char letter;

	for (letter='a';letter<='z';letter++)
	{
		if (!(letter='e'||letter='q'))
		{
			putchar(letter);
		}
	}	
	return (0);
}
