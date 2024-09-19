#include <stdio.h>

int main(){
	
	int i,acima =0,igual;
	float notas[19],media;
	
	printf("**CALCULO MEDIA DA TURMA***\n");
	for(i =0; i <20;i++){
	printf("\nNota do aluno de numero %d: ",i+1);
	scanf("%f",&notas[i]);
	media += notas[i];
	}
	media = media/ 20;
	
	for(i =0; i <20;i++){
		if(notas[i]>media){
			acima++;
		}
		if(notas[i]==media)
		igual++;
	}
	printf("\n\nMedia da turma: %.2f",media);
	printf("\n\nQuantidade de alunos ACIMA da media: %d",acima);
	printf("\n\nQuantidade de alunos com nota igual a media: %d",igual);
	
	
	
	
	return 0;
}