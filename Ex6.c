#include <stdio.h>


int main(){
		
		int i,N;
	float SOMA[N],A[N],B[N];

	
	printf("\nEscreva o tamanho dos vetores: ");
	scanf("%d",&N);
	
	
	printf("\n\n\n**VETOR A**\n\n");
	for(i=0;i<N;i++){
		
		printf("\nEscreva o valor do vetor 'A' no indice %d: ",i);
		scanf("%f",&A[i]);
		
	}
	
	printf("\n\n\n**VETOR B**\n\n");
	for(i=0;i<N;i++){
		
		printf("\nEscreva o valor do vetor 'B' no indice %d: ",i);
		scanf("%f",&B[i]);
		
	}
	
	printf("\n\n\n**SOMA DOS VETORES**\n");
		for(i=0;i<N;i++){
			
			SOMA[i] = A[i] + B[i];
			printf("\nValor da soma de 'A' e 'B' no indice %d: %.2f \n",i,SOMA[i]);
			
			printf("\n\n\n\n\n\n");
			
	}
	
	
	
	
	
	return 0;
}