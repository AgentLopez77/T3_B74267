#include <stdio.h>
#include <string.h>

int main(){

    char string[300];

    char requerido;

    int contador = 0;

    int longitud;

    printf("Ingrese un texto de máximo 300 caracteres:\n");

    //Recibo el string del usuario y determino su tamaño

    fgets(string, sizeof(string), stdin);

    //uso la función fgets para "leer" la línea de texto

    string[strcspn(string, "\n")]= 0;

    //Pregunta cuál es el caracter que se desea contar

    printf("Ingrese el caracter que desea contar: ");

    scanf(" %c", &requerido);

    longitud = strlen(string);

    //Bucle para contar la cantidad de veces que aparece el caracter en el string

    for (int i = 0; i < longitud; i++){
        if (string[i] == requerido){
            contador++;

        }
    }

    printf("El caracter (%c) aparece %d veces en el string.\n", requerido, contador);


    // Bucle para imprimir el string alrevez
    printf("El string en orden inverso es: ");

    for (int i = longitud -1; i >= 0; i--){
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;



}