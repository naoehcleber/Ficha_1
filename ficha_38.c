#include <stdio.h>
int main(){

float reais, dolares, divisao;
printf("Valor em reais : R$");
scanf("%f",&reais);
printf("Cotacao do dolares : US$");
scanf("%f",&dolares);
divisao = reais/dolares;
printf("%.2f US$", divisao);

return 0;
}
