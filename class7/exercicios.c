#include <stdio.h>



unsigned int clear(unsigned int val){
    return (val & 000000000000);
}

unsigned int setBit(unsigned int x,int bit){
    unsigned mask = (1<<bit);

    return x|mask;
}

unsigned int clearBit(unsigned int x,int bit){
    unsigned mask = ~(1 << bit);
    return x & mask;
}
unsigned int invertBit(unsigned int x,int bit){
    unsigned mask = (1 << bit);
    return x ^ mask;

}

int testBit(unsigned int x, int bit){
    unsigned mask = (1 << bit);
    unsigned int actualValue = x ^ mask;
    if (x>actualValue) {
        return 1;
    }

    return 0;
}

int main(){
    unsigned int val;
    val =3;
    val = testBit(val,2);
    //val = clear(val);
    printf("%i\n",val);
}
