#include <stdio.h>
int main(){
printf("Insira a altura e o peso : ");

float altura, peso, IMC;

scanf("%f %f", &altura, &peso);


IMC = peso/(altura*altura);
printf("%.2f", IMC);




return 0;
 }
