/*Problem 3: The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/
#include <stdio.h>
int main(){
	int long long num; /*num is the number we want to
	discover the largest prime factor.*/
	int prime;
	int i;
	int div;
	int aux;
	
	printf("Type the number:\n");
	scanf("%d", &num);
	printf("The number: %d\nPrime factors:\n", num);
	prime = 2;
	while(prime < 1000){
		i = 0; 
		div = 1;
		while(div <= prime){
			if(prime % div == 0)
				i++;
			div++;
		}
		if(i == 2){
			if(num % prime == 0){
				num /= prime;
				printf("%d\n", prime);
				if(num == 1)
					printf("Largest prime factor: %d\n", prime);
			}
			else
				prime++;
		}
		else
			prime++;
	}
	
	
	return 0;
}
