#include <stdio.h>

int main(void) {
    double brt, liq, rea, grat, total;

    printf("Digite o seu salario bruto: ");
    scanf("%lf", &brt);

    rea = brt * 1.38;
    grat = brt * 0.20;
    total = rea + grat;
    liq = total * 0.85;

    printf("Seu salario liquido a receber = %.2lf\n", liq);

    return 0;
}