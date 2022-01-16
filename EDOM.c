// The C library macro EDOM represents a domain error, which occurs if an input arguments is outside 
// the domain, which the mathematical function is defined and errno is set to EDOM.

#include <stdio.h>
#include <errno.h>
#include <math.h>

int main(){
    double val;

    errno = 0;
    val = sqrt(-10);

    if(errno==EDOM){
        printf("Invalid value \n");
    }else{
        printf("Valid value\n");
    }

    errno = 0;
    val = sqrt(10);

    if(errno == EDOM){
        printf("Invalid value\n");
    }else{
        printf("Valid value\n");
    }

    return 0;
}