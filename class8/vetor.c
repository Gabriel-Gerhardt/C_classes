#include <stdio.h>

int main() {
    int valor = 10;
    int* ponteiro;
    ponteiro =&valor;
    printf("%i\n", *ponteiro);
    return 0;
}
