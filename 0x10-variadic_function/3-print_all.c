#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
void print_str(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_char(va_list ap);
/**
 * print_all - print all
 * @format: chars
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, j;
	op_t op[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
	};
	char *sep = "";

	va_start(ap, format);
	i = 0;
	while (format != NULL && *(format + i) != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*(format + i) == op[j].op)
			{
				printf("%s", sep);
				op[j].func(ap);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
/**
 * print_str - print string
 * @ap: pointer
 * Return: Void
 */
void print_str(va_list ap)
{
	char *str = va_arg(ap, char*);

	str = (str == NULL) ? "(nil)" : str;
	printf("%s", str);
}
/**
 * print_int - print int
 * @ap: pointer
 * Return: Void
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_char - print char
 * @ap: pointer
 * Return: Void
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * print_float - print float
 * @ap: pointer
 * Return: Void
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
