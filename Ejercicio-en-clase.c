#include <stdio.h>

float calcularPromedio(float notas[5]);

int main (int argc, char *argv[]) {
   
    float notas[5]= {6.5, 7.1, 8, 6, 5};
    printf("Promedio: %.2f\n", calcularPromedio(notas));
    return 0;
}

float calcularPromedio(float notas[5]) {
    float suma = 0.0f;     
    for (int i = 0; i < 5; i++) {
        printf("Notas [%d]: %.2f\n", i+1, notas[i]);
        suma += notas[i];
    }   

    float promedio = suma / 5.0f;
    return promedio;
}