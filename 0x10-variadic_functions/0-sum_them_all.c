#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function
 * Return: If n == 0 - 0.
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    va_start(args, n);
    int sum = 0;
    for (unsigned int i = 0; i < n; i++)
    {
	    sum += va_arg(args, int);
    }
    a_end(args);
    return (sum);
}
