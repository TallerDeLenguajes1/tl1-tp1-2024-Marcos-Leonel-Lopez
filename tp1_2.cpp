#include <stdio.h>
int cuadrado(int x);
void cuadrado_void(int *x);
void invertir(int *a,int *b);
void ordenar(int *a,int *b);
int main(){
    //a) Haga una función que devuelva el cuadrado de un número
    int x;
    printf("Funcion que devuelve el cuadrado de un numero\n");
    printf("\tIngrese un numero: ");
    scanf("%d", &x);
    printf("El cuadrado de %d es: %d\n", x, cuadrado(x));
    //b) Haga la función anterior, pero devolviendo un tipo void
    int y,*puntY;
    puntY = &y;
    printf("Funcion void que devuelve el cuadrado de un numero\n");
    printf("\tIngrese un numero: ");
    scanf("%d", &y);
    printf("El cuadrado de %d ", y);
    cuadrado_void(puntY); //es valido cuadrado_void(&y);???
    printf("es: %d\n", y);
    //c) Al recibir una variable muestre por pantalla la dirección y el contenido de la variable
    int z;
    printf("Recibir una variable, mostrar por pantalla la direccion y el contenido de esta\n");
    printf("\tIngrese un numero: ");
    scanf("%d", &z);
    printf("La direccion de la variable es: %p\n", &z);
    printf("El contenido de la variable es: %d\n", z);
    //d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos.
    int a,b;
    printf("Dado dos parametros de entrada, debera invertir los valores entre ambos.\n");
    printf("\tIngrese un numero 'a': ");
    scanf("%d", &a);
    printf("\tIngrese otro numero 'b': ");
    scanf("%d", &b);
    invertir(&a,&b);
    printf("El valor de a es: %d\n", a);
    printf("El valor de b es: %d\n", b);
    //e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el primer parámetro el menor y en el segundo el mayor
    int c,d;
    printf("Dado dos parametros de entrada, debera devolverlos de forma ordenada, en el primer parametro el menor y en el segundo el mayor\n");
    printf("\tIngrese un numero 'c': ");
    scanf("%d", &c);
    printf("\tIngrese otro numero 'd': ");
    scanf("%d", &d);
    ordenar(&c,&d);
    printf("El menor es: %d\n", c);
    printf("El mayor es: %d\n", d);
    return 0;
}

int cuadrado(int x){
    return x*x;
}
void cuadrado_void(int *x){
    *x = (*x )*(*x);
}
void invertir(int *a,int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
void ordenar(int *a,int *b){
    int aux;
    if(*a > *b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}

    