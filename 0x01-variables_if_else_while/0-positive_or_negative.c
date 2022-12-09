#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there*/

/**
 * main - prints the signs of value
 * Return: o
*/
int main(void)
{
	int n;

	n = rand() - RAND_MAX / 2;
	if (n < 0){
		  printf("%d is negative\n", n);
	}else if (n == 0){
		  printf("%d is zero\n", n);
	}else {
		  printf("%d is positive\n", n);
	}
	          return (0);
}
