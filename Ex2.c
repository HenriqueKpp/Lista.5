#include <stdio.h>


int main(){
	
	int vetor[19];
	int i;
	int maior =0,num;
	
	for (i =0;i <20;i++){
		do{
		
		printf("\nEscreva o valor de vetor de numero %d: ",i);
		scanf("%d",&vetor[i]);
		if(vetor[i]<= 0)
		printf("\n**Valores negativos e o '0' nao sao aceitos, digite novamente**\n ");
	}while(vetor[i]<= 0);
		if(vetor[i] > maior){
			maior = vetor[i];
			num = i;
		}
	}
	
	printf("\n\nO maior valor foi %d e estava na posicao %d do vetor.\n\n",maior,num);
	
	
	return 0;
}