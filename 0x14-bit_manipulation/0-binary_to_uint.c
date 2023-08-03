#include "main.h"

/**
* binary_to_uint - converts binary number to unsigned int
* @b: string with the binary number
*
* Return: converted number
*/
unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	int result = 0;

	if (!b)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	for (i = 0; i < len; i++)
	{
		result = result << 1;
		if (b[i] == '1')
		{
			result = result | 1;
		}
	}
	return (result);

}
