#include <stdio.h>

int main(void) {
int int1, int2, resto;
float final;

printf("Digite o valor do primeiro numero da divisao\n"); scanf("%d", &int1);
printf("Digite o valor do segundo numero da divisao\n"); scanf("%d", &int2);


if(int2 != 0){
    final = (float)int1 / int2;
    printf("O resultado da divisao e = %.2f\n", final);
    resto = int1 % int2;
    printf("O resultado do resto da divisao e = %d\n", resto);
}
else {
    printf("O segundo valor deve ser diferente de zero");
}
return (0);
}