#include <stdio.h>
#include <math.h>

int main(void) {
float num, numQ, numC, numRQ, numRC;

printf("Digite o numero (Tem que ser maior que zero): "); scanf("%f", &num);

    numQ = num * num;
    numC = num * num * num;
    numRQ = sqrtf(num);
    numRC = cbrtf (num);

if(num != 0){
    printf("O numero digitado ao quadrado = %f\n", numQ);
    printf("O numero digitado ao cubo = %f\n", numC);
    printf("A raiz quadrada do numero digitado = %f\n", numRQ);
    printf("A raiz cubica do numero digitado = %f\n", numRC);
} else {
    printf("Numero invalido");
}
return (0);
}