#include "main.h"

/**
 * _isdigit - checks if parameter is a number between 0 and 9.
 * @c: input number.
 * Return: 1 if a number is between 0 and 1, 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

