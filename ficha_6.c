#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    int soma;
    printf("Digite dois numeros inteiros : ");
    scanf("%d %d",&numero1,  &numero2);
    soma = numero1 + numero2;
    printf("A soma deles eh %d", soma);
    return 0;
}
