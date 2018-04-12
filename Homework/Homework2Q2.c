#include<stdio.h>//Ocean Levels (chp.02: #07)
/*
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write
a program that displays :
• The number of millimeters higher than the current level that the ocean’s level will be
in 5 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 7 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 10 years*/


int main() {
	//variables
	float fixedLevel = 1.50;//fixed level in millimeters

							//calulation
	float fiveYearsLevel = fixedLevel * 5.0;
	float sevenYearsLevel = fixedLevel * 7.0;
	float tenYearsLevel = fixedLevel * 10.0;

	//display
	printf("\nOcean's level is currently rising about %5.1f", fixedLevel);
	printf("mm(millimeters) per year.\n");
	printf("\nIn 5 years ocean's level will rise %5.1f", fiveYearsLevel);
	printf("mm\n");
	printf("\nIn 7 years ocean's level will rise %5.1f", sevenYearsLevel);
	printf("mm\n");
	printf( "\nIn 10 years ocean's level will rise %5.1f",  tenYearsLevel);
	printf("mm");


	return 0;


}
