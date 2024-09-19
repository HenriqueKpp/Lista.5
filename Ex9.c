#include <stdio.h>


int main(){

int i,j;
float num[10];
float aux, extra;

for(i=0;i<10;i++){
printf("\nEscreva o valor de numero %d: ",i+1);
scanf("%f",&num[i]);
}


for(i=0;i<10;i++){

    for(j=0;j<10;j++){

        if(num[i] > num[j]){

        aux=num[j];
        num[j]=num[i];
        num[i] = aux;

        }
    }
}


printf("\n\n******VALORES ORDENADOS*****: \n\n");

for(i=9;i>=0;i--){

    printf("\n %.2f",num[i]);

}

printf("\nInserir mais um elemento: ");
scanf("%f",&extra);

printf("\n\n******VALORES ORDENADOS + VALOR EXTRA*****: \n\n");


if(extra<num[9]){
printf("\nExtra: %.2f",extra);
}

for(i=9;i>=0;i--){

  printf("\n -- %.2f",num[i]);

if((extra>=num[i]) && (extra <= num[i-1])){
printf("\nExtra: %.2f",extra);
extra = num[i];
}
}

if(extra>num[0])
printf("\nExtra: %.2f",extra);





    return 0;
}