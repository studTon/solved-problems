#include<stdio.h>
main(){
	int N, num, numA, numB, i, sum;
	N=33;
	numA=1;numB=0;i=0;sum=0;
	while(i<N){
	if(numA%2==0){
		printf("NUM: %d\n", numA);
		sum+=numA;
		}
	num=numA+numB;
	numB=numA;
	numA=num;
	i++;
}
	printf("SUM: %d\n", sum);
}
