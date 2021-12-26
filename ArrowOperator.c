// C Program to show Arrow operator
// Used in structure

#include <stdio.h>
#include <stdlib.h>

// Creating the structure
struct student{
    char name[80];
    int age;
    float percentage;
};

// Creating te structure object
struct student* emp;

// Driver Code
int main(){
    // Assigning memory to struct variable emp
    emp = (struct student*) malloc(sizeof(struct student));

    // Assigning value to the age variable
    // Of emp using arrow operator
    emp->age = 18;
    // Printing the assigned value to the variable
    printf("%d \n",emp->age);
    return 0;
}