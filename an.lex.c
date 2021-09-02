#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE * input = fopen("input.txt", "rb");
    char caracter;

    if(input != NULL){
        while (feof(input) == 0)
        {
            caracter = fgetc(input);
            printf("%c", caracter);
        }
        fclose(input);
        printf("\nFin de la lectura del archivo\n");
    }
    else if(input == NULL){
        perror("Ocurrio un error al intentar abrir el archivo\n");
        return 1;
    }
}
