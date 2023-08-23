#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
int raio;
  printf("Digite o raio : \n");
  scanf("%d", &raio);
  //output
  //C = 2 * pi * raio
  float circunferencia;
  float pi;
  pi = 3.14;
  circunferencia = 2 * pi * raio;
  printf("O perimetro da circunferencia eh : %.2f \n", circunferencia);



return 0;
}
