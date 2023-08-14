#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
  
int main(void) {
    int num = -5;
    int absoluteValue = ABS(num);

    printf("The absolute value of %d is %d\n", num, absoluteValue);
    return 0;
}
