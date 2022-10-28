/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer to a number
 * @index:
 *
 * Return: 1 when sucessful otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!((*n >> index) & 1) && index < 64)
	{
		*n += 1 << index;
		return (1);
	}
	return (-1);
}
