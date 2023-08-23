#include <stdio.h>
int main(){

//ano de nascimento
    printf("Digite seu ano de nascimento : ");
    int anoNascimento;
    scanf("%d", &anoNascimento);
    int anoAtual = 2023;
    int idade;
    idade = anoAtual - anoNascimento;
    printf("Voce tem %d anos de idade", idade);
return 0;
}
