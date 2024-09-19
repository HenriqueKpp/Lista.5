#include <stdio.h>


int main(){

float v[30],valor= 0;
int incidencia =0, i= 0;

for(;i<30;i++){
printf("\nEscreva o valor do vetor no indice %d:  ",i);
scanf("%f",&v[i]);
}
printf("\n\nEscreva valor para testar quantas vezes aparece no vetor: ");
scanf("%f",&valor);

for(i=0;i<30;i++){
if(v[i]==valor){
incidencia++;
}
}
printf("\n\nQuantidade de vezes que aparece no vetor: %d\n\n\n",incidencia);


    return 0;
}