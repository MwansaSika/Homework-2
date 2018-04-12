#include<stdio.h>//(Chap.03: #23.) Stock Transaction Program

/*
Last month Joe purchased some stock in Acme Software, Inc. Here are the details of
the purchase:
• The number of shares that Joe purchased was 1,000.
• When Joe purchased the stock, he paid $45.50 per share.
• Joe paid his stockbroker a commission that amounted to 2% of the amount he paid
for the stock.

Two weeks later Joe sold the stock. Here are the details of the sale:
• The number of shares that Joe sold was 1,000.
• He sold the stock for $56.90 per share.
• He paid his stockbroker another commission that amounted to 2% of the amount
he received for the stock.

Write a program that displays the following information:
• The amount of money Joe paid for the stock.
• The amount of commission Joe paid his broker when he bought the stock.
• The amount that Joe sold the stock for.
• The amount of commission Joe paid his broker when he sold the stock.
• Display the amount of profit that Joe made after selling his stock and paying the two
commissions to his broker. (If the amount of profit that your program displays is a
negative number, then Joe lost money on the transaction.)
*/


int main() {
	//variables
	float sharesAmount = 1000.0;
	float initalCommissionFee = (sharesAmount * 45.50) * 0.02;
	float soldCommisionFee = (sharesAmount * 56.90) * 0.02;
	float initalTotal = (sharesAmount * 45.50) + initalCommissionFee;
	float soldTotal = (sharesAmount * 56.90) + soldCommisionFee;
	float grandTotal = (soldTotal - initalTotal);
	//display
	printf("\n1000 shares at $45.50, it cost Joe $%5.1f", sharesAmount * 45.50);
	printf(" \nplus 2 percent commission fee of $%5.1f", initalCommissionFee);
	printf(" to his broker, the final cost Joe paid is: $%5.1f", initalTotal);
	printf("\n\nJoe later sold all 1000 shares at $59.90 per share with a subtotal $%5.1f",sharesAmount * 56.90);
	printf(" \nplus another 2 percent commission fee of the sale $%5.1f", soldCommisionFee);
	printf(", Joe paid: $%5.1f", soldTotal);
    printf("\n\nAfter all fees paid, Joe profited: $%5.1f", grandTotal);

	return 0;


}
