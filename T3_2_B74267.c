#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Función de verificación

int validacion(const char *string){
    if (string == NULL || *string == '\0'){
        return 0;
    }

    int i = 0;
    if (string[0] == '-' || string[0] == '+'){
        i = 1;
    }

    if (string[i] == '\0'){

        return 0;
    }

    for (; string[i] != '\0'; i++){
        if (!isdigit((unsigned char)string[i])) {

            return 0;
            
        }
    }
    return 1;
}


int main(int argc, char *argv[]){

    FILE *inputFile;
    char line[256];
    int numero_linea = 0;

    if (argc > 1) {
        inputFile = fopen(argv[1], "r");
        if (inputFile == NULL) {
            fprintf(stderr, "Error al abrir el archivo %s\n", argv[1]);
            return EXIT_FAILURE;
        }
    } else {
        inputFile = stdin; // Leer desde la entrada estándar si no se proporciona un archivo
    }

    // Leer el archivo línea por línea
    while (fgets(line, sizeof(line), inputFile) != NULL){
        numero_linea++;
        // Eliminar el salto de línea al final de la línea
        line[strcspn(line, "\n")] = 0;

        // Validar la línea
        if (validacion(line)) {
            printf("Línea %d: %s es un número válido\n", numero_linea, line);

            //Escribo el número en un archivo de salida
            fprintf(stdout, "Número : %s\n", line);
        } else {
            printf("Línea %d: %s no es un número válido\n", numero_linea, line);
            //Escribo el error en un archivo de salida
            fprintf(stderr, "Error en la línea %d: %s no es un número válido\n", numero_linea, line);
        }
    }

    // Cerrar el archivo si se abrió
    if (inputFile != stdin) {
        fclose(inputFile);
    }
    // Finalizar el programa

    
  
    return 0;
}