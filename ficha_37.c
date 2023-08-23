#include <stdio.h>
int main(){

printf("Digite sua idade : ");
int idade, dias, meses, diasResto;
scanf("%d", &idade);
//converter de anos pra dias
dias = idade * 365;
//printf("Voce viveu %d dias \n", dias);
meses = dias/30;
diasResto = dias%30;
printf("Voce viveu %d meses e %d dias", meses, diasResto);

return 0;
}
