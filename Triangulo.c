#include <stdio.h>

int classificaTriangulo (float a, float b, float c){
    if(a==b && b==c)
        return 0;
    else
        if(a==b || b==c || a==c)
            return 1;
        else
            return 2;
            
}

int main (){
    float l1, l2, l3;

    printf("Digite as medidas dos 3 lados do triangulo: ");
    scanf("%f %f %f", &l1, &l2, &l3);
    switch(classificaTriangulo(l1,l2,l3)){
            case 0: printf("Triangulo Equilatero");
            break;
            case 1: printf("Triangulo Isosceles");
            break;
            case 2: printf("Triangulo Escaleno");
            break;



    }
return 0;
}