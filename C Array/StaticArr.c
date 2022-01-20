// Static arrays are initialized to zero if not explicitly initialized
#include <stdio.h>

void staticArrayInit(void);    // function prototype
void automaticArrayInit(void); // function prototype

// function main begins program execution
int main(void)
{
    puts("First call to each function : ");
    staticArrayInit();
    automaticArrayInit();

    puts("\n\nSecond call to each function : ");
    staticArrayInit();
    automaticArrayInit();
    puts("");
}

// Function to demonstrate a static local array
void staticArrayInit(void)
{
    // initializes elements to 0 before the function is called
    static int array[3];

    puts("\nValues on entering staticArrayInit : ");

    // output contents of array1
    for (unsigned int i = 0; i <= 2; ++i)
    {
        printf("array1[%u] = %d\t", i, array[i]);
    }

    puts("\nValues on entering staticArrayInit : ");

    // modify and ouput contents of array
    for (unsigned int i = 0; i <= 2; ++i)
    {
        printf("array1[%u] = %d\t", i, array[i] += 5);
    }
}

// Function to demonstrate an automatic local array
void automaticArrayInit(void){

    // initializes elements each time function is called
    int array2[3] = {1,2,3};

    puts("\n]nValues on entering automaticArrayInit : ");

    // output contents of array1
    for (unsigned int i = 0; i <= 2; ++i)
    {
        printf("array1[%u] = %d\t", i, array2[i]);
    }

    puts("\nValues on entering AutomaticArrayInit : ");

    // modify and ouput contents of array
    for (unsigned int i = 0; i <= 2; ++i)
    {
        printf("array1[%u] = %d\t", i, array2[i] += 5);
    }
}