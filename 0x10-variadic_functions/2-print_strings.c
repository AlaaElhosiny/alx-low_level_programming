#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print string
 * @separator: chars
 * @n: int
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (i > 0)
			printf("%s", separator);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
}
	printf("\n");

	va_end(ap);
}
