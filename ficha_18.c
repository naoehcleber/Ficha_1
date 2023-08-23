#include <stdio.h>
#include <string.h>

int main(){

printf("Digite seu nome : ");
char nome[50];
scanf("%s", &nome);
if (strlen(nome) > 5){
    printf("O nome tem mais de 5 caracteres");
}
else{
    printf("O nome tem 5 ou menos caracteres");
}


return 0;
}

