#include <stdio.h>

int main(void){
    unsigned int x;

    for(x = 1; x<=10;++x){
        if(x==5){
            continue;
        }
        printf("%u",x);
    }

    printf("\nUsed continue to skip printing the value 5\n");
}