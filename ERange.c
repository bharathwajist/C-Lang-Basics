// C library macro ERANGE represents a range error, Which occurs if an input argument is outside the range,
// over which the mathematical function is defined and errno is set to ERANGE

// Declaration Example
// #define ERANGE some_value

#include <stdio.h>
#include <errno.h>
#include <math.h>

int main(){
    double x;
    double value;

    x = 2.00000000;
    value = log(x);

    if(errno == ERANGE){
        printf("Log(%f) is out of range \n",x);
    }else{
        printf("Log(%f) = %f\n",x,value);
    }

    x = 1.0000000;
    value = log(x);


    if(errno == ERANGE){
        printf("Log(%f) is out of range \n",x);
    }else{
        printf("Log(%f) = %f\n",x,value);
    }

    x = 0.000;
    value = log(x);

    if(errno == ERANGE){
        printf("Log(%f) is out of range \n",x);
    }else{
        printf("Log(%f) = %f\n",x,value);
    }

    return 0;
}