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
int n, last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last);
else if (last == 0)
printf("Last digit of %d is %d and is 0\n", n, last);
else if (last < 6 && last != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
return (0);

}
