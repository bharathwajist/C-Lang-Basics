#include <stdio.h>

int square(int);

int main(void){
    int a = 10;
    printf("%d squared: %d \n",a,square(a));
}

int square(int x){
    return x*x;
}