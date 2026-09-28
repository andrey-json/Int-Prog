#include <stdio.h>

int main(void) {
int n1, n2;

printf("Digite o primero numero: "); scanf("%d", &n1);
printf("Digite o segundo numero: "); scanf("%d", &n2);

if(n1 == n2)
    printf("Os numeros sao iguais");
else 
    if(n1 > n2)
        printf("Maior valor = %d", n1);
    else
        printf("Maior valor= %d", n2);
return (0);
}