/*Problem 2: Each new term in the Fibonacci sequence is generated by 
adding the previous two terms. By starting with 1 and 2, the first 10 
terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not 
exceed four million, find the sum of the even-valued terms.*/

#include<stdio.h>
int main(){
	int i;
	int num, numA, numB, sum;
	numA = 1;
	numB = 0; 
	i = 0; 
	sum = 0;
	while( num < 4000000 ){
		if(numA % 2 == 0){
			printf("NUM: %d\n", numA);
			sum += numA;
		}
		num = numA + numB;
		numB = numA;
		numA = num;
		i++;
	}
	printf("SUM: %d\n", sum);
	return 0;
}
