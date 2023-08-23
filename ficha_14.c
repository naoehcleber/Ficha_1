#include <stdio.h>
int main(){

int numero, resto;
printf("Digite um numero : ");
scanf("%d", &numero);
resto = numero%2;
if (resto == 0){
    printf("Seu numero eh par");
}
else {
    printf("Seu numero eh impar");
};

return 0;
}
