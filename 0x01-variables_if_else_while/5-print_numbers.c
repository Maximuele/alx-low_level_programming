#include <stdio.h>

/**
 *main - Entry point
 *print single digit base 10
 *using putchar
 *Return: Always 0 (sucess)
 */
int main(void)
{
int n;

for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar('\n');
return (0);

}
