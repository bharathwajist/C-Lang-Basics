#include <stdio.h>
#include <ctype.h>

int main(){
    int i = 0, j = 0;
    char str1 [] = "all \a about \t programming";
    char str2 [] = "tutorials \n point";

    // Printing string till control character
    while (!iscntrl(str1[i])){
        putchar(str1[i]);
        i++;
    }
    
    while (!iscntrl(str2[j])){
        putchar(str2[j]);
        j++;
    }

    return 0;
}