/*Problem 1: 
If we list all the natural numbers below 10 
that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.*/
#include <stdio.h>

int main() {
	int i;
	int num, sum;
	int mult5, mult3, mult15;
	sum = 0;
	for(i = 0; i < 1000; i++){
		mult3 = 0; mult5 = 0; mult15 = 0;
		if(5 * i < 1000){
			mult5 = 5 * i;
			printf("NUM(5):%d\n", mult5);
			}
		if(3 * i < 1000){
			mult3 = 3 * i;
			printf("NUM(3):%d\n", mult3);
			}
		if(5 * 3 * i < 1000){
			mult15 = 5 * 3 * i;
			printf("NUM(15):%d\n", mult15);	
		}
		sum = sum + mult3 + mult5 - mult15;
	}
	printf("Sum of 5 and 3 multiples below 1000.\n%d\n", sum);
	return 0;
}
