#include <stdio.h>



int main() {

float v1[15],v2[15];
int i=0,quantidade =0;

printf("*****PRIMEIRO VETOR****");

for(;i<15;i++){

printf("\nEscreva o valor do indice %d do laco N1: ",i);
scanf("%f",&v1[i]);

}

printf("*****SEGUNDO VETOR****");

for(i=0;i<15;i++){
printf("\nEscreva o valor do indice %d do laco N2: ",i);
scanf("%f",&v2[i]);
}

for(i=0;i<15;i++){
if(v1[i] == v2[i]){
quantidade++;
}
}
printf("\n\n\nQuantidade de vezes que no mesmo indice foram encontrados valores iguais nos 2 vetores: %d\n\n\n\n",quantidade);



    return 0;
}