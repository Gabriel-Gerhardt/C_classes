#include <stdio.h>

void trocaMaior(int* x, int* y){
    if(*x<*y){
        int temp = *x;
        *x= *y;
        *y = temp;

    }
}
int main(){
    int a = 12;
    int b = 8;
    printf("%d, %d\n",a,b);
    printf("%p, %p\n",&a,&b);
    trocaMaior(&a,&b);
    printf("%d,%d\n",a,b);

}
