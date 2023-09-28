#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b)
{
	int converted_num;
	int i ;

	if ( !b )
	{
		return (0);
	}
	for ( i = 0; b[i]; i++)
	{
		if ( b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
		converted_num = 2 * converted_num + ( b[i] - '0');

	}
	return (converted_num);
}
