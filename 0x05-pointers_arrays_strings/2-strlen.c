#include "main.h"
#include <stdio.h>

/**
 * @s:pointer to the sting character
 *_strlen - return the length of a string
 * Return- returns the length of the string
 */
int _strlen(char *s)
{
	int strlength;

	strlength = 0;
	while (*(s + strlength) != '\0')
		strlength++;
	return (strlength);
}
