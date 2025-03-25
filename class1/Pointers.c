#include <stdio.h>
#include <stdlib.h>


//Passagem por referencia
void multiply(int* value){
    *value = *value * *value;
}
void divide(int* value, int* value2){
    *value = *value/ *value2;
}

int main(void){
    int value = 1000;
    int value2 = 100;
    multiply(&value);
    divide(&value, &value2);
    printf("%d\n", value);
    
}

