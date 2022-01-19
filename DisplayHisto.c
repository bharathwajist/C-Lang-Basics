// Displaying a histogram
#include <stdio.h>
#define SIZE 5

// function main begins program execution
int main(void){
    // use initializer list to intialize array n
    int n[SIZE] = {19, 3, 15, 7, 11};

    printf("%s%13s%17s\n","Element","Value","Histogram");

    // for each element of array n, output a bar of the histogram
    for(unsigned int i = 0; i < SIZE; ++i){
        printf("%7u%13d         ",i,n[i]);

        for(int j = 1; j <= n[i]; ++j){
            // print one bar
            printf("%s","#");
        }
        puts("");   // end a histogram bar with a newline
    }
}