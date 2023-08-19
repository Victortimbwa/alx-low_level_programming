#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  *print_strings- prints strings in a new line
  * @separator : the string to be printed between the strinngs
  * @n : The number of strings passed to the function
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			char *str = va_arg(ap, char *);

			if (str != NULL)
			{
				printf("%s", str);
			}
			else
			{
				printf("(nil)");
				continue;
			}
			if (i != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(ap);
		printf("\n");

}
