#include "main"
/**
 * -islower - Shows 1 if the input ia s lower case character. Another cases shows 0
 *
 *  Return: 1 for lowercase. 0 for others.
 */
int islower(int c)

{
	char c;
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}

