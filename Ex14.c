#include<stdio.h>


int main(){

int mat[3][3];
int i,j,determinante;

for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("\nEscreva o valor da matriz na linha %d e coluna %d: ",i,j);
scanf("%d",&mat[i][j]);
}
}
determinante = ((mat[0][0]*mat[1][1]*mat[2][2])+(mat[0][1]*mat[1][2]*mat[2][0])+(mat[0][2]*mat[1][0]*mat[2][1]))-((mat[0][2]*mat[1][1]*mat[2][0])+(mat[0][0]*mat[1][2]*mat[2][1])+(mat[0][1]*mat[1][0]*mat[2][2]));

printf("\n\n\nDeterminante: %d\n\n",determinante);

    return 0;
}