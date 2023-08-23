#include <stdio.h>
#include <string.h>

int main(){

printf("Digite seu estado civil : ");
char estadoCivil[50];
scanf("%s", &estadoCivil);

if (strcmp(estadoCivil, "casado") == 0 || strcmp(estadoCivil, "casada") == 0) {
        printf("Voce eh casado(a).\n");
    }
else if (strcmp(estadoCivil, "solteiro") == 0 || strcmp(estadoCivil, "solteira") == 0) {
        printf("Voce eh solteiro(a).\n");
    }

return 0;
}
