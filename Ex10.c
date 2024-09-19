#include <stdio.h>


int main(){

float verificar;
int i,tirar = -1,j =0;
float num[20],num2[19];

for(i=0;i<20;i++){
printf("\nEscreva o valor do vetor  na posicao %d: ",i);
scanf("%f",&num[i]);
}


printf("\nNumero que se deseja verificar: ");
scanf("%f",&verificar);
;

for(i=0;i<20;i++){
    if(verificar == num[i]){
    tirar = i;
    printf("\n\nO valor foi encontrado na lista e sera removido.");
    printf("\nLista final sem o numero '%.1f': \n\n",verificar);
}
}



if(tirar == -1 ){ 
printf("\n\nNenhum valor encontrado, a lista nao sofrera alteracoes");
    printf("\nLista final : \n\n");
}



for(i=0;i<20;i++){
    if(i == tirar ){
        j++;
    }
                num2[i]= num[j];
                printf("%d --> %.1f\n",i,num2[i]);
                j++;
}






    return 0;
}