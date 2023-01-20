#ifndef VAR_FUNC_H
#define VAR_FUNC_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct op - operation
 * @op: print type
 * @func: function
 */
typedef struct op
{
	char op;
	void (*func)(va_list);
} op_t;
#endif
