#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
printf("Digite sua cidade em PERNAMBUCO: ");
char cidade[50];
char estado[] = "PERNAMBUCO";
scanf("%s", &cidade);
printf("Voce mora em %s, %s", cidade, estado);


return 0;
}
