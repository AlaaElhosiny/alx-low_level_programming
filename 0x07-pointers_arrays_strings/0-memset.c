#include "main.h"

/**
 * _memset - ironnou
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
