#include <stdio.h>



int main(){
    int value1=10;
    int *value_pointer= &value1;
    *value_pointer = 20;
    printf("The value which value_pointer apoints %d\n",  *value_pointer);
    printf("The memory point of value1 is %p\n", value_pointer);


}
