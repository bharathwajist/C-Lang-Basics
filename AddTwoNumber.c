#include <stdio.h>

int main(void){
    int int1;
    int int2;

    printf("Enter First Number : ");
    scanf("%d",&int1);

    printf("Enter Second Number : ");
    scanf("%d",&int2);

    int sum = int1 + int2;
    printf("Sum of two number = %d \n",sum);
}