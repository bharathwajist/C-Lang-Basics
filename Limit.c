// Implementing limit.h library in C language
#include <stdio.h>
#include <limits.h>

int main(){
    printf("The number of bits in a byte %d \n",CHAR_BIT);
    printf("The minimum of bits in a SIGNED CHAR %d \n",SCHAR_MIN);
    printf("The maximum of bits in a SIGNED CHAR %d \n",SCHAR_MAX);
    printf("The minimum of bits in a UNSIGNED CHAR %d \n",UCHAR_MAX);

    printf("The minimum of bits in a SHORT INT %d \n",SHRT_MIN);
    printf("The maximum of bits in a SHORT INT %d \n",SHRT_MAX);

    printf("The minimum of bits in a INT %d \n",INT_MIN);
    printf("The maximum of bits in a INT %d \n",INT_MAX);

    printf("The minimum of bits in a CHAR %d \n",CHAR_MIN);
    printf("The maximum of bits in a CHAR %d \n",CHAR_MAX);

    printf("The minimum of bits in a LONG %ld \n",LONG_MIN);
    printf("The maximum of bits in a LONG %ld \n",LONG_MAX);

    return 0;
}