#include <stdio.h>

int main(){
    int numero, *puntNum;
    numero = 18;
    puntNum = &numero;

    printf("Contenido del puntero: %d\n", *puntNum);
    printf("La dirección de memoria almacenada por el puntero: %p\n", puntNum);
    printf("La dirección de memoria de la variable: %p\n", numero);




    printf("Hola Mundo!\n");
    return 0;
}