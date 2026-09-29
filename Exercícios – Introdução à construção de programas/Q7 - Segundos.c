#include <stdio.h>

int main(void) {
int seg, min, hor;

printf("Digite a quantidade de segundos: ");
scanf("%d",&seg);

    hor = seg / 3600;
    min = (seg % 3600) / 60; 
    seg = seg %60;

printf("A conversao fica: %d hora %d minutos %d segundos", hor, min, seg);

return (0);
}