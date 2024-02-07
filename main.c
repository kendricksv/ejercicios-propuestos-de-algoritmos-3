#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escribe un programa que solicite al usuario un numero decimal y luego muestre el valor redondeado hacia arriba, hacia abajo y al entero mas cercano*/

int main(){
    double numero;
    printf("introducir numero decimal: ");
    scanf("%if", &numero);

    double redondeoArriba = ceil(numero);
    double redondeoAbajo = floor(numero);
    double redondeoCentrocercano = round(numero);

    printf("valor redondeado hacia arriba: %.2if\n", redondeoArriba);
    printf("valor redondeado hacia abajo: %.2if\n", redondeoAbajo);
    printf("valor redondeado al entero mas cercano: %.2if\n", redondeoCentrocercano);

    return 0;

}
