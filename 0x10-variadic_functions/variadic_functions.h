#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct formatt - defines the structure of the format object
 *
 * @c: The character
 * @func: the function
 *
 * Description: The structure of the formatt object
 *
 */

typedef struct formatt
{
	char *c;
	void (*func)();
} fmt;

void printc(va_list args);
void printfl(va_list args);
void printi(va_list args);
void prints(va_list args);
#endif
