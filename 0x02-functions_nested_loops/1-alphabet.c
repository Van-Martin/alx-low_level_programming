#include "main.h"

/**
* print_alphabet - Prints the alphabet in lower case
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)

{
	int ch;

	for ( ch= 'a'; ch<= 'z'; ch++ )
	{
		putchar(ch);
	}
	putchar('\n');

}

