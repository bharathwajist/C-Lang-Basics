#include <stdio.h>

// function main begins program execution
int main(void){
    int n[5];   // n is an array of five integer

    // set elements of array n to 0
    for(size_t i = 0; i < 5;i++){
        n[i] = 0;   // set elements at location i to 0
    }

    printf("%s%13s\n","Element","value");
    
    // output contents of array n in the tabular format
    for(size_t i = 0; i<5;++i){
        printf("%7lu%13d\n",i,n[i]);
    }
}
