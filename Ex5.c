#include <stdio.h>




int main(){
	
	int i;
	float num[21];
	
	for(i=1;i<=20;i++){
		
		printf("\nEscreva o valor do vetor no indice %d: ",i);
		scanf("%f",&num[i]);
		
	}

	printf("\n\n\nValores em ordem inversa: ");
	i = 20;
	
do{

	printf("\n- %d: %.2f",i,num[i]);
		i--;
		
	}while( i>=1);
	

	
	
	
	return 0;
}