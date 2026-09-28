#include <stdio.h>
#define PI 3.1416

int main(void) {
 float r, h ,A, V;

    printf("Digite o valor do raio do cilindro: ");
    scanf("%f",&r);
    printf("Digite o valor da altura do cilindro: ");
    scanf("%f",&h);
    A = 2*PI*r*(h+r);
    V = PI*r*r*h;

    printf("Area do cilindro = %f\n", A);
    printf("Volume do cilindro = %f\n", V);
    return 0;
}
