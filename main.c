#include <stdio.h>

int sumar(int a, int b);
int sumarxReferencia(int *ptra, int *ptrb);

int main() {
    int a, b;
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    int resultado = sumar(a, b);
    
    printf("La suma de %d y %d es: %d", a, b, resultado);
    printf("\nEl resultado de sumar por referencia es: %d", sumarxReferencia(&a, &b));
}

int sumar(int a, int b) {
    return a + b;
}

int sumarxReferencia(int *ptra, int *ptrb) {
    return *ptra + *ptrb;
}