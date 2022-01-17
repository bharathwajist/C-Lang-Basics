#include <stdio.h>
#include <string.h>

// Define simple structure
struct 
{
    unsigned int widthValidate;
    unsigned int heightValidate;
} status1;

// Define a structure with bit fields
struct{
    unsigned int widthValidate : 1;
    unsigned int heightValidate : 1;
} status2;

int main(){
    printf("Memory size occupied by status1 : %ld\n",sizeof(status1));
    printf("Memory size occupied by status2 : %ld\n",sizeof(status2));
}