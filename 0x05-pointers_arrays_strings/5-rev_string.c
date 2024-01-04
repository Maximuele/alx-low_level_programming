#include <stdio.h>
#include "main.h"

/**
 * rev_string - function that prints strings in reverse
 * @s: string to be printed
 * Return : nothing
 */
void rev_string(char *s)
{
int i;
int n;

n = 0;
while (s[n] != '\0')
	n++;
for (i = n - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
