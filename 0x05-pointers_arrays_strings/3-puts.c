#include "main.h"
#include <stdio.h>

/**
 * _puts - print strings
 * @str : string
 * Return - string lenghr
 */
void _puts(char *str)
{
int d;

d = 0;
while (str[d] != '\0')
{
putchar(str[d]);
d++;
}
putchar('\n');
}
