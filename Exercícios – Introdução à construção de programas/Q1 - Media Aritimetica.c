#include <stdio.h>

int main(void) {
float nota1, nota2, nota3, final;

    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunta nota: ");
    scanf("%f",&nota2);
    printf("Digite a terceira nota: ");
    scanf("%f",&nota3);

    final = (nota1 + nota2 + nota3)/3;

    printf("A media final das notas é= %.2f\n", final);
    
return (0);
}