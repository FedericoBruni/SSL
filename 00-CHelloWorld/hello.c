#include <stdio.h>

int main(void){
    FILE *archivo;
    archivo = fopen("output.txt", "w");
    if (archivo == NULL){
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    fprintf(archivo, "Hello, World!\n");
    return 0;
}
