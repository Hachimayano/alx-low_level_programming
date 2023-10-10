#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @a: function parameter
 *
 * Return: Absolute value of number or zero
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}

	return (0);
}
