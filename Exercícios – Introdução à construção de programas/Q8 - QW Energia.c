#include <stdio.h>

int main(void) {
float s, q, D, Q, QC;

    printf("Digite o valor do Salario Minimo: ");
    scanf("%f",&s);
    printf("Digite o valor do quilowatt consumido: ");
    scanf("%f",&q);

    Q = 0.2*s;
    QC = Q*q;
    D = QC*0.15;

    printf("Valor de cada quilowatt = %.2f\n", Q);
    printf("Valor de cada quilowatt da residencia= %.2f\n", QC);
    printf("Valor de cada quilowatt da residencia com desconto= %.2f\n", D);
    return 0;
}
