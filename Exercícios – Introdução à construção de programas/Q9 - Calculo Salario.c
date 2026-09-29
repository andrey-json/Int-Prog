#include <stdio.h>

int main(void) {
float ht, he, sm, HT, HE, SB, SE, final ; 

    printf("Digite o valor do salario minimo: ");
    scanf("%f",&sm);
    printf("Digite o valor das suas horas trabalhadas: ");
    scanf("%f",&ht);
    printf("Digite o valor das suas horas extras trabalhadas: ");
    scanf("%f",&he);
    
    HT = 0.125*sm;
    HE = 0.25*sm;
    SB = HT*ht;
    SE = he*HE;
    final = SB+SE;
    
    printf("Seu salario a receber= %.2f\n", final);

return (0);
}