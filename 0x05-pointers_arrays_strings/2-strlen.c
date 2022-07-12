#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int strlength;

	strlength = 0;
	while (*(s + strlength) != '\0')
		strlength++;
	return (strlength);
}
