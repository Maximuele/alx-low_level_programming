#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Entry point
 *Positive or negative interger
 *Return: Always 0 (sucess)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
    {
        printf("%d is greater than 0: is positive\n", n);
    } 
    if (n == 0)
    {
        printf("%d is 0: is zero\n", n);
    }
    else
        printf("%d is less than 0: is negative\n", n);
    return(0);
}
