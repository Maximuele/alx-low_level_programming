#include <stdio.h>

/**
 *main - Entry point
 *print lower case aplphabet
 *using putchar
 *Return: Always 0 (sucess)
 */
int main(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);

}
