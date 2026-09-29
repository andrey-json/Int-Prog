#include <stdio.h>

int main(void) {
float n1, n2, n3, p1, p2, p3, final, finalp;

    printf("Digite a primeira nota: ");
    scanf("%f",&n1);
        printf("Qual o peso da primeira nota: ");
        scanf("%f",&p1);

    printf("Digite a segunta nota: ");
    scanf("%f",&n2);
        printf("Qual o peso da segunda nota: ");
        scanf("%f",&p2);

    printf("Digite a terceira nota: ");
    scanf("%f",&n3);
        printf("Qual o peso da terceiro nota: ");
        scanf("%f",&p3);
    
    finalp = p1 + p2 + p3;
    final = (n1*p1) + (n2*p2) + (n3*p3) / finalp;
   
    printf("A media final das notas é= %.2f\n", final);
    
return (0);
}