#include <stdio.h>
/**
 * main - Read 2 variables, named A and B and make the sum of
 *		these two variables, assigning its result to the variable X.
 * @a: first variable to read
 * @b: second variable to read
 * 
 * Return: Always 0
 */

int main(void)
{
	int A, B, result;

	scanf("%d %d", &A, &B);

	result = A + B;

	printf("X = %d\n", result);

	return (0);
}
