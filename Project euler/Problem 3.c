/*Problem 3: The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/
#include <stdio.h>
int main(){
	int num = 13195;
	int prime;
	int i;
	int div;
	int aux;
	
	prime = 2;
	while(prime < 1000){
		i = 0; 
		div = 1;
		while(div <= prime){
			if(prime % div == 0)
				i++;
			div++;
		}
		if(i == 2)
			printf("%d\n", prime);
		prime++;
	}
	
	
	return 0;
}
