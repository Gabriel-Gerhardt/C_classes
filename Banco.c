#include <stdio.h>

void banco(int* valor) {
    int cont = 0;  

    while (*valor != 0) {  
        if (*valor >= 100) {
            *valor = *valor - 100;
            cont = cont + 1;
        }
        else if (*valor >= 50) {
            *valor = *valor - 50;
            cont = cont + 1;
        }
        else if (*valor >= 10) {
            *valor = *valor - 10;
            cont = cont + 1;
        }
        else if (*valor >= 5) {
            *valor = *valor - 5;
            cont = cont + 1;
        }
        else {
            *valor = *valor - 1;
            cont = cont + 1;
        }
    }

    printf("%d\n", cont); 
}

int main(void) {
    int valor = 200;
    banco(&valor); 
    return 0;
}