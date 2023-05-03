#include <stdio.h>
/**
 * main - a program that calculates and shows the volume of
 *		a sphere being provided the value of its radius (R).
 *		The formula to calculate the volume is: (4/3) * pi * R3
 * Return: Always 0
 */
int main(void)
{
	double R, volume, radius, pi = 3.14159;

	scanf("%lf", &R);
	radius = R * R * R;
	volume = (4.0 / 3) * pi * radius;

	printf("VOLUME = %.3lf\n", volume);

	return (0);
}
