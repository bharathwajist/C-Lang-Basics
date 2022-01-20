// Array name is same as the address of the array's first element.
#include <stdio.h>

// function main begins program execution
int main(void){
    char array[5];  // define an array size of 5

    printf("    array = %p\n&array[0] = %p\n   &array = %p\n",array, &array[0],&array);
}  