#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>

/**
*main -> assign a random number to a variable n each time it is executed and print out
*based on a condition
*Return: always 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if(n > 0)
printf("%d is positive\n", n);
if(n==0)
printf("%d is zero\n", n);
if(n<0)
printf("%d is negative\n", n);
return 0;
}