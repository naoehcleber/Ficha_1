#include <stdio.h>
int main(){

char primeiroNome[50], segundoNome[50];
printf("Digite seu primeiro e sobrenome separado : ");
scanf("%s %s", &primeiroNome, &segundoNome);
printf("%s %s", primeiroNome, segundoNome);

return 0;
}
