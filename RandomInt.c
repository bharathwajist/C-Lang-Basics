#include <stdio.h>
#include <stdlib.h>

int main(void){
    // Loop for 20 times
    for(unsigned int i = i; i <= 20; ++i){
        // pick random number from 1 to 6 and output it
        printf("%10d",i+(rand()%6));

        // If counter us divisible by 5, begin new line of output
        if(i % 5 == 0){
            puts("");
        }
    }
    // int i = rand();
    // printf("%d\n",i);
}