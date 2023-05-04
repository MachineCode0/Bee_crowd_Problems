#include <stdio.h>
/**
 * main - Calculate the area using the formula given
 *		in the problem description.
 * Return: Always 0
 */
int main(void)
{
	double A, n, R, radius;

	n = 3.14159;

	scanf("%lf", &R);

	radius = R * R;

	A = n * radius;

	printf("A = %.4lf\n", A);

	return (0);
}
