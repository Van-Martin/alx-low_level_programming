#include "main.h"
/**
 * -islower - Shows 1 if the input ia s lower case character. Another cases shows 0
 *
 *  Return: 1 for lowercase. 0 for others.
 */
int _islower(int ch)

{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}

