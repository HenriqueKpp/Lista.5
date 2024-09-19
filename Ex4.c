#include <stdio.h>



int main(){
	
	float A[9], M[9],X;
	int i;
	
	for(i=0;i<10;i++){
		
		printf("\nEscreva o valor do vetor 'A' no indice de numero %d: ",i);
		scanf("%f",&A[i]);
		
	}
	printf("\n\nEscreva o valor de X: ");
	scanf("%f",&X);
	
	for(i =0; i<10;i++){
		
		M[i] = A[i] * X;
		printf("\nValor do vetor M no indice %d: %.2f",i,M[i]);

	}
	
	
	return 0;
}