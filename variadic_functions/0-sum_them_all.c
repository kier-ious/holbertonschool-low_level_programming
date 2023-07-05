#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all parameters
 * @n: the numbers of arguments being passed through
 * Return: the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;

	/* initalize the sum to 0 and declare loop var */
	unsigned int sum = 0, i;

	/* if there are no args, return 0 */
	if (n == 0)
		return (0);

	/* initalize the va_list to access the variable args */
	va_start(valist, n);

	/* loops through all args and adds one */
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	/* ends processing the args */
	va_end(valist);

	return (sum);
}
