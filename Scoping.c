#include <stdio.h>

void useLocal(void);    // function prototype
void useStaticLocal(void);  // function prototype
void useGlobal(void);   // function prototype

int x = 1;  // Global variable

int main(void){
    int x = 5;  // local variable to main function

    printf("local x in outer scope of main is %d\n",x);

    {       // start new scope
        int x = 7;  // local variable to new scope
        printf("Local x in inner scope of main is %d\n",x);
    }   // end new scope

    printf("local x in outer scope of main function is %d\n",x);

    useLocal();     // useLocal has automatic local x
    useStaticLocal();   // useStaticLocal has static local x
    useGlobal();    // useGlobal use global x
    useStaticLocal();   // static local x retains its prior value
    useGlobal();    // global x also retains its value

    printf("\nlocal x in main is %d\n",x);
}

// useLocal reinitialized local variable x during each call
void useLocal(void){
    int x = 25;     // Initialized each time useLocal is called
    printf("\nlocal x in useLocal is %d after etering useLocal\n",x);
    x++;
    printf("local x in useLocal is %d before existing useLocal\n",x);
}

// useStatisticLocal initializes static local variable x only the first time
// the function is called; value of x is saved between calls to this
// function
void useStaticLocal(void){
    // initialized once
    static int x = 50;

    printf("\nlocal static x is %d on entering useStaticLocal\n",x);
    ++x;
    printf("local static x is %d on existing useStaticLocal\n",x);
} 

// function useGlobal modifies global variable x during each call
void useGlobal(void){
    printf("\nglobal x is %d on entering useGlobal\n",x);
    x *= 10;
    printf("Global x is %d on existing useGlobal\n",x);
}