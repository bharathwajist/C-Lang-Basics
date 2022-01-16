#include <stdio.h>
#include <stddef.h>

int main(){
    // Wide-char type array string
    wchar_t wname[] = "tamaaivariables";
    printf(L"The length of %ls",wname);
    printf(L" is %d \n",wcslen(wname));
    return 0;
}