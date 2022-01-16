#include <stdio.h>

int main(void){
    int sum = 0;
    for(unsigned int n = 0; n < 5; n++){
        // printf("Nothin just implementing for iteration : %d \n",n);
        sum = sum+n;
    }

    printf("The value of sum is : %d\n",sum);
}