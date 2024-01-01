#include <stdio.h>

/**
 *main - Entry point
 *print all hexa numbers
 *using putchar
 *Return: Always 0 (sucess)
 */
int main(void)
{
int n;
char hex;

for (n = 48; n < 58; n++)
{
putchar(n);
}
for (hex = 'a'; hex <= 'f'; hex++)
{
putchar(hex);
}
putchar('\n');
return (0);

}
