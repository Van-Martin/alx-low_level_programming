#include "main.h"
/**
 * -islower - Shows 1 if the input ia s lower case character. Another cases shows 0
 *
 *  Return: 1 for lowercase. 0 for others.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}

