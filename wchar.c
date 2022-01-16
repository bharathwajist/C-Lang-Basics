// Using wide character in C language
#include <stdio.h>
#include <stddef.h>

int main(){
    wchar_t w = L'!';
    printf("Wide character value is :: %d",w);
    printf("\nWide character value is :: %ld \n",sizeof(wchar_t));
    return 0;
}