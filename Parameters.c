#include <stdio.h>
#include <math.h>
#include <string.h>

//Passagem por valor
int quadrado(int valor) {
    valor = valor * valor;
    return valor;
}

int main(void) {
    int gremio = 1000;
    int valor = quadrado(gremio);
    printf("%d\n", valor); 
    return 0;
}

