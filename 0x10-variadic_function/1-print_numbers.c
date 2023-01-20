#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: chars
 * @n: int
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		if (i > 0)
			printf("%s", separator);
		printf("%d", num);
	}
	printf("\n");

	va_end(ap);
}
