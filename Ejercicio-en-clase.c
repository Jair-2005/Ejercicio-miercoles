#include <stdio.h>

float calcularPromedioxRef(float *ptr);

int main (int argc, char *argv[]) {
   
    float notas[5]= {6.5, 7.1, 8, 6, 5};
    printf("Promedio: %.2f\n", calcularPromedioxRef(notas));
    return 0;
}

float calcularPromedioxRef(float *ptr) {
    float suma = 0.0f;     
    for (int i = 0; i < 5; i++) {
        printf("Notas [%d]: %.2f\n", i+1, ptr[i]);
        suma += ptr[i];
    }   

    float promedio = suma / 5.0f;
    return promedio;
}