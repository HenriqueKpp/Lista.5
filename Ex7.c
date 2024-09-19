#include <stdio.h>



int main(){

int quant;

printf("Calcular media da temperatura de quantos dias?(Se quiser do ano inteiro digite '365') ");
scanf("%d",&quant);

float temp[quant],media = 0.0;
float maior = -100.0 , menor = 100.0;
int i, inferior=0;


for(i=0;i<quant;i++){
printf("\nEscreva a temperatura do dia %d : ",i+1);
scanf("%f",&temp[i]);
media = media + temp[i];
}
scanf("%c");
media = media / quant;

for(i=0;i<quant;i++){
if(temp[i]<media)
inferior++;

if(temp[i]>maior){
maior = temp[i];
}
if(temp[i]<menor){
menor = temp[i];
}

}
printf("\nMaior temperatura do ano: %.2f graus",maior);
printf("\nMenor temperatura do ano: %.2f graus",menor);
printf("\nMedia da temperatura anual: %.2f graus",media);
printf("\nDias em que a temperatura estava abaixo da media: %d",inferior);







    return 0;
}