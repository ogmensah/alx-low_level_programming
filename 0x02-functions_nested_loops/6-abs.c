#include <unistd.h>

/**
 * _abs - produces absolute values of an integer
 *
 * Return: On success 1.
 */


int _abs(int y)
{
	if (y < 0)
	{
		y = -1 * y;
	}
	return (y);
}
