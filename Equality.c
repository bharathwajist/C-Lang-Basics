#include <stdio.h>

int main(void){
    puts("Enter two integers, and I will tell you : ");
    puts("the relationships the satisfy : ");

    int num1;
    int num2;

    scanf("%d %d",&num1, &num2);

    if(num1 == num2){
        printf("%d is equal to %d\n",num1,num2);
    }if(num1 != num2){
        printf("%d is not equal to %d\n", num1, num2);
    }if(num1 < num2){
        printf("%d is greater than %d\n", num1, num2);
    }if(num1 > num2){
        printf("%d is greater than %d\n", num2, num1);
    }
}