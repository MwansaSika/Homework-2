
#include <stdio.h>//(Chp02: #4)


int main() {

	//variables,calculation
	float mealCost = 88.67;
	float tax = mealCost * 0.0675; //calc. tax @ 6.75%
	float subTotal = mealCost + tax; //calc meal incl.tax
	float tip = subTotal * 0.20;//calc tip,giving subtotal
	float finalTotal = subTotal + tip;//final cost





	//display
	printf ("\nMeal cost: $%5.2f", mealCost);
	printf ("\nTax amount: $%5.2f", tax);
	printf ("\nTip amount: $%5.2f", tip);
	printf ("\nTotal bill: $%5.2f",finalTotal);


	return 0;
}
