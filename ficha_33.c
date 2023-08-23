#include <stdio.h>
int main(){

printf("Digite a base e a altura de um triangulo : ");
float base, altura, area;


scanf("%f %f", &base, &altura);
area = (base * altura)/2;
printf("A area eh %.2f", area);

return 0;
}
