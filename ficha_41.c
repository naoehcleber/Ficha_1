#include <stdio.h>
int main(){

int temperaturaCelsius, temperaturaFahrenheit;
printf("Digite uma temperatura em celsius : ");
scanf("%d", &temperaturaCelsius);
temperaturaFahrenheit = (temperaturaCelsius * (9/5))+32;
printf("em Fahrenheit : %d \n", temperaturaFahrenheit);

return 0;
}
