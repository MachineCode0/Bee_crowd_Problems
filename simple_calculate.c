#include <stdio.h>
/**
 * main - read a code of a product 1, the number of units of
 *		product 1, the price for one unit of product 1,
 *		the code of a product 2, the number of units of product 2
 *		and the price for one unit of product 2. After this,
 *		calculate and show the amount to be paid.
 * Return: Always 0
 */
int main(void)
{
	int prod1, prod2, prod1_no_of_units, prod2_no_of_units;
	float prod1_amt, prod2_amt, total_amt1, total_amt2, total_amt;

	scanf("%d %d", &prod1, &prod1_no_of_units);
	scanf("%f", &prod1_amt);
	scanf("%d %d %f", &prod2, &prod2_no_of_units, &prod2_amt);

	total_amt1 = prod1_amt * prod1_no_of_units;
	total_amt2 = prod2_amt * prod2_no_of_units;

	total_amt = total_amt1 + total_amt2;

	printf("VALOR A PAGAR: R$ %.2f\n", total_amt);

	return (0);
}
