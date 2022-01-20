// Treating character arrays as string
#include <stdio.h>
#define SIZE 20
// function main begins program execution
int main(void){
    char string1[SIZE]; // reserves 20 characters
    char string2[] = "String literal";  // reserves 15 characters

    // read string from user into array string1
    printf("%s","Enter a string (no longer 19 characket) : ");
    scanf("%19s",string1);      // input no more than 19 characters

    // output string
    printf("string1 is : %s\nstring2 os : %s\n"
            "string1 with spaces between characters is : \n",string1,string2);
    
    // output character until null character is reached
    for(unsigned int i = 0; i < SIZE && string1[i] != '\0';++i){
        printf("%c",string1[i]);
    }

    puts("");
}