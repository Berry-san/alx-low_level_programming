#include "main.h"
/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: char to check
 */

void rev_string(char *s)
{
	int i, len1, len2;
	char rev;

	len1 = 0;
	len2 = 0;

	while (s[len1] != '\0')
		len1++;

	len2 = len1 - 1;
	for (i = 0; len2 >= 0 && i < len2; i++)
	{
		rev = s[i];
		s[i] = s[len2];
		s[len2] = rev;
		len2 -= 1;
	}
}
