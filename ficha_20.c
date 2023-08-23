#include <stdio.h>
int main(){

printf("Digite a base e a altura de um retangulo : ");
float base, altura, area;


scanf("%f %f", &base, &altura);
area = base * altura;
printf("A area eh %.2f", area);

return 0;
}
