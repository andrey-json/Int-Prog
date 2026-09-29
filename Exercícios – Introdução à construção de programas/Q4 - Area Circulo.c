#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main(void) {
float raio, area;

printf("Digite o valor do raio do circulo\n"); scanf("%f", &raio);

area = PI * (raio * raio);

printf("O valor da area do circulo = %.4f\n", area);

return (0);
}