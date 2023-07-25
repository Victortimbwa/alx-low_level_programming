#include "main.h"
/**
  * swap_int - swaps 2 numbers
  * @a: value to be swapped
  * @b: swapped with
  * Return:void
  */
void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
