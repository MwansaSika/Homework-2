#include<stdio.h>//(Chap.05: #23.) Pattern Displays

/*
Write a program that uses a loop to display Pattern A below, followed by another loop
that displays Pattern B.


pattern A				Pattern B
+						++++++++++
++						+++++++++
+++						++++++++
++++					+++++++
+++++					++++++
++++++				        +++++
+++++++			                ++++
++++++++			        +++
+++++++++		                ++
++++++++++		                +

*/




int main() {
	printf("Pattern A:");
	//Pattern A r=row, c=column
	for (int r = 0; r < 11; r++) {
		for (int c = 0; c < r; c++) {
			printf("+");
		}
		printf("\n");
	}

	printf("\n");
	printf("Pattern B:");
	printf("\n");
	//Pattern B, r=row, c=column
	for (int r = 10; r > 0; r--) {

		for (int c = 0; c < r; c++) {
			printf("+");
		}
		printf("\n");
	}

	return 0;


}
