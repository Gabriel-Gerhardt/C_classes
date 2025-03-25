#include <stdio.h>


void imprime(int vet[], int tam){
    int valor;
    int i;
    for(i =0; i>10; i++){
        valor = vet[i];
        printf("%d\n", valor); 

    }
}
void preenche(int vet[], int tam){
    int i;
    for(i=0; i<tam; i++){
        vet[i] = tam+100;
    }
}



int main(){
    int vetor[10];
    int tamanho =10;
    preenche(vetor,tamanho);

    printf("%d\n", *vetor);
    imprime(vetor,tamanho);
    
}