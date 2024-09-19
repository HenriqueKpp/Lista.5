#include <stdio.h>


int main(){
	
	int vetor[19];
	int i;
	int menor = 99999999,num;
	
	for (i =0;i <20;i++){
		do{
		
		printf("\nEscreva o valor de vetor de numero %d: ",i);
		scanf("%d",&vetor[i]);
		if(vetor[i]<= 0)
		printf("\n**Valores negativos e o '0' nao sao aceitos, digite novamente**\n ");
	}while(vetor[i]<= 0);
		if(vetor[i] < menor){
			menor = vetor[i];
			num = i;
		}
	}
	
	printf("\n\nO menor valor foi %d e estava na posicao %d do vetor.\n\n",menor,num);
	
	
	return 0;
}