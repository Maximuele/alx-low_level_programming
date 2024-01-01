#include <stdio.h>

/**
 *main - Entry point
 *print lower case aplphabet
 *using putchar
 *except q and e
 *Return: Always 0 (sucess)
 */
int main(void)
{
char alpha;

for  (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha != 'q' && alpha != 'e')
{
putchar(alpha);
}
}
putchar('\n');
return (0);

}
