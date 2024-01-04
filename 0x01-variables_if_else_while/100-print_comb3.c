#include <stdio.h>

/**
 *main - Entry point
 *print combinations of two digits
 *using putchar
 *Return: Always 0 (sucess)
 */
int main(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
putchar(i++);
if (i < 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);

}
