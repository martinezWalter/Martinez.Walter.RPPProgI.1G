#include <stdio.h>
#include <stdlib.h>

float getPercentage(float number);
int contarCaracteres(char cadena[], char caracter);

float priceProd;
char cadena[200] = "";
char caracter;
int cantidadCar = 0;

int main()
{
    printf("Ingrese precio del producto: ");
    scanf("%f", &priceProd);

    priceProd = getPercentage(priceProd);
    printf("\n\nEl valor del producto con un 5%% de descuento es %.2f \n", priceProd);


    printf("Ingrese cadena de caracteres: ");
    fflush(stdin);
    scanf("%s", &cadena);
    printf("\nIngrese caracter: ");
    fflush(stdin);
    scanf("%c", &caracter);

    cantidadCar = contarCaracteres(cadena, caracter);
    printf("\n\nEl caracter se repite %d veces\n", cantidadCar);

    return 0;
}

float getPercentage(float number){
    return number * 0.95;
}

int contarCaracteres(char cadena[], char caracter){
    int tam = strlen(cadena);
    int contador = 0;
    int i;
    for(i=0 ; i < tam; i++){
        if (cadena[i] == caracter){
            contador++;
        }
    }
    return contador;
}
