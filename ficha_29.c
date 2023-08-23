#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
float preco = 20;
char string[20];

printf("Insira uma produto : ");
scanf("%s", &string);
printf("%s R$ %.2f", string,preco);

return 0;
}
