// Analyzing student poll
#include <stdio.h>
#define RESPONSES_SIZE 40  // define array sizes
#define FREQEUNCY_SIZE 11

// function main begins program execution
int main(void){
    // Initialize frequency counters to 0
    int frequency[FREQEUNCY_SIZE] = {0};

    // place the survey responses in the responses array
    int responses[RESPONSES_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

    // for each answer, select the value of an element of array responses
    // and use that value as an index in array frequency to
    // determine element to increment
    for(size_t answer = 0; answer < RESPONSES_SIZE; ++answer){
        ++frequency[responses[answer]];
    }

    // display results
    printf("%s%17s\n","Rating","Frequency");
    
    int total = 0;

    // output the frequencies in a tabular format
    for(unsigned int rating = 1; rating < FREQEUNCY_SIZE; ++rating){
        printf("%6d%17d\n",rating,frequency[rating]);
        total = total + frequency[rating];
    }

    printf("Total votes casted %d\n",total);
}