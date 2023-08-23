#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
double a, b, result;

scanf("%lf %lf", &a, &b);

result = fmod(a,b);

printf("O resto da divisao entre %lf e %lf eh %lf",a,b,result);

return 0;
}
