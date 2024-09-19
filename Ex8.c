#include <stdio.h>


int main(){

int i,j;
float num[10];
float aux;

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

printf("\n %f",num[i]);

}





    return 0;
}