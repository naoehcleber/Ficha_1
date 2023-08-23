#include <stdio.h>
int main(){

char nome[50], sobrenome[50];
printf("Digite seu nome e sobrenome : ");
scanf("%s %s", &nome, &sobrenome);
printf("%s %s", sobrenome, nome);

return 0;
}
