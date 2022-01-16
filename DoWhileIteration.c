#include <stdio.h>

int main(void){
    unsigned int counter = 1;

    do{
        printf("%u \n",counter);
    }while(++counter <= 10);
}