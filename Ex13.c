#include <stdio.h>




int main(){

float vet[50];
int i,j,k=0;


for(i=0;i<50;i++){
printf("\nEscreva o valor do vetor no indice %d:  ",i);
scanf("%f",&vet[i]);
}

for(i=0;i<50;i++){
for(j=0;j<50;j++){
if(vet[i]==vet[j] && i != j){
printf("\n\nValores iguais encontrados nos indices %d e %d .",i,j);
k++;
}
}
}
k= k/2;
printf("\n\n\nQuantidade de vezes que foram encontradas copias(sem a ordem influenciar): %d ",k);
    return 0;
}