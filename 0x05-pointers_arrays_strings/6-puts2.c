#include <stdio.h>
#include "main.h"

/**
 * puts2 - function that prints every character of a string
 * @str: string to be printed
 * Return : nothing
 */
void puts2(char *str)
{
int i;

for (i = 0; i < 9; i+=2)
{
putchar(str[i]);
}
putchar('\n');
}
