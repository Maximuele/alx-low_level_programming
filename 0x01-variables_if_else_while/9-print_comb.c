#include <stdio.h>

/**
 *main - Entry point
 *print all hexa numbers
 *using putchar
 *Return: Always 0 (sucess)
 */
int main(void)
{
int i;
int j;

for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
putchar(i + j);
}
}
putchar('\n');
return (0);

}
