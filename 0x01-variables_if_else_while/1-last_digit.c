#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main -task 1 print the last digit of the number store in the variable n
*Return 0
**/

int main(void)
{
int n;
char last[] = "last digit of";

srand(time(0));
n = rand() - RAND_MAX / 2;
/*your code goes there*/
printf ("%s %d is %d and is", last,n,n % 10);
if (n % 10 > 5)
{
printf ("greater than 5/n");
}
else if (n % 10 == 0)
{
printf ("0\n");
}
else 
{
printf("less than 6 and not o\n");
}
return (0);
}
