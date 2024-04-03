#include <stdio.h>

int main(){
    int numero, *puntNum;
    numero = 18;
    puntNum = &numero;

    printf("1) Contenido del puntero: %d\n", *puntNum);
    printf("2) La dirección de memoria almacenada por el puntero: %p\n", puntNum);
    printf("3) La dirección de memoria de la variable: %p\n", &numero);
    printf("4) La dirección de memoria del puntero: %p\n", &puntNum);
    printf("5) El tamaño de memoria utilizado por esa variable: %zu bytes \n", sizeof(puntNum));

    printf("Hola Mundo!\n");
    return 0;
}