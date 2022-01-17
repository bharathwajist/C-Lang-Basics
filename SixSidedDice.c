#include <stdio.h>
#include <stdlib.h>

int main(void){
    unsigned int freq1 = 0;
    unsigned int freq2 = 0;
    unsigned int freq3 = 0;
    unsigned int freq4 = 0;
    unsigned int freq5 = 0;
    unsigned int freq6 = 0;

    // Loop for 60000000 times and summarize results
    for(unsigned int roll = 1; roll <= 600000000; ++roll){
        int face = 1+rand()%6;

        // determine face value and increment appropriate counter
        switch(face){
            case 1:     // Rolled 1
                ++freq1;
                break;
            case 2:     // Rolled 2
                ++freq2;
                break;
            case 3:     // Rolled 3
                ++freq3;
                break;
            case 4:     // Rolled 4
                ++freq4;
                break;
            case 5:     // Rolled 5
                ++freq5;
                break;
            case 6:     // Rolled 6
                ++freq6;
                break;
        }
    }

    printf("%s%13s\n","Face","Frequency");
    printf("    1%13u\n",freq1);
    printf("    2%13u\n",freq2);
    printf("    3%13u\n",freq3);
    printf("    4%13u\n",freq4);
    printf("    5%13u\n",freq5);
    printf("    6%13u\n",freq6);
}