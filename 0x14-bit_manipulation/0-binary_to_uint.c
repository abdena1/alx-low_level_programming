#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned
 * @b: string of char contain binary
 *
 * Return: converted unsigned number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_uns = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_uns = 2 * dec_uns + (b[i] - '0');
	}

	return (dec_uns);
}
