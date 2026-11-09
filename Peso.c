#include <stdio.h>

float pesoid (float a, float b){
    float peso;
    if (a == 1)
      peso = 72.7*b-58;
    else
      peso = 62.1*b-44.7;

return peso;
}

int main (){
    float S, P, H;
    printf("Digite 1 para Homem ou 2 para Mulher\n");
    scanf("%f", &S);
    printf("Informe sua Altura?\n");
    scanf("%f", &H);
    P = pesoid(S, H);
    printf("Seu peso ideal será %.2f KG", P);

return 0;
}

      