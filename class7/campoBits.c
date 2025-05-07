#include <stdio.h>


void colour1(unsigned int* x, unsigned int newValue){
    unsigned int mask = (*x<<10);
    *x = *x & 00000000;
    *x = *x |mask;
}
void colour2(unsigned int* x, unsigned int newValue){
    unsigned int mask = (*x<<20);
    *x = *x & 00000000;
    *x = *x |mask;

}
void colour3(unsigned int* x, unsigned int newValue){
    unsigned int mask = (*x<<30);
    *x = *x & 00000000;
    *x = *x |mask;
}
int main(){
    unsigned int cor = 0x1F4;
    int flag = 0;
    unsigned int newValue;
    printf("Escolha uma cor: 1-vermelho, 2-verde, 3-azul");
    printf("");
    scanf("%i",&flag);

    if(flag ==1){
        printf("Verde");
        printf("Digite o valor para modificar");
        scanf("%i", &newValue);
        colour3(&cor,newValue);
        printf("Valor em binario %i", cor);
        printf("Valor em hexa %u", cor);

    }
    if(flag==2){
        printf("Azul");
        printf("Digite o valor para modificar");
        scanf("%i", &newValue);
        colour2(&cor,newValue);

        printf("Valor em binario %i", cor);
        printf("Valor em hexa %u", cor);


    }
    if(flag==3){
        printf("Vermelho");
        printf("Digite o valor para modificar");
        scanf("%i", &newValue);
        colour1(&cor,newValue);
        printf("Valor em binario %i", cor);
        printf("Valor em hexa %u", cor);

    }

}
