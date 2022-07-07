#include <stdio.h>

/**
* print_alphabet - Prints the alphabet in lower case
*
* Return: Always 0 (Success)
*/
int main()

{
	int ch;
	clrscr();

	for ( ch= 'a'; ch<= 'z'; ch++ )
	
	{
		_putchar(ch);
	}
	_putchar('\n');
}

