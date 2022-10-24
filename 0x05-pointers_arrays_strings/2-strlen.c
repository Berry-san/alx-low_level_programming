#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char to check
 * Return: returns length of the length
*/

int _strlen(char *s)
{
	int len;

	while(*s != '\0')
	{
		len += 1;
		*s = *s + 1;
	}
	return (len);
}