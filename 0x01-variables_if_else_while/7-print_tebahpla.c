#include <stdio.h>

/**
 *main - Entry point
 *print lower case aplphabet reverse
 *using putchar
 *Return: Always 0 (sucess)
 */
int main(void)
{
char alpha;

for (alpha = 'z'; alpha >= 'a'; alpha--)
{
putchar(alpha);
}
putchar('\n');
return (0);

}
