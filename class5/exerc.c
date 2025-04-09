#include <stdio.h>
#include <string.h>


//Escreva uma função chamada minha_substring, que recebe duas strings como parâmetro e verifica se a segunda é substring da primeira, retornando a posição onde ela começa na primeira. Caso não seja encontrada, retorne -1:
int minha_substring(char str1[], char str2[]){
    int value = strnlen(str1,100);

    for (int i = 0; i < value; i++)
    {
        if (str1[0]== str2[i])
        {   
            for (int y = 0; y < strlen(str2); y++)
            {

                    
            }
            

        }
        
    }
    
}



int main(){
    int value1=10;
    int *value_pointer= &value1;
    *value_pointer = 20;
    printf("The value which value_pointer apoints %d\n",  *value_pointer);
    printf("The memory point of value1 %p\n", value_pointer);


}
