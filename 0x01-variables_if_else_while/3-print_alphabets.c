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
char cap;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
for (cap = 'A'; cap <= 'Z'; cap++)
{
putchar(cap);
}
return (0);

}
