#include <stdio.h>
#include <string.h>

int const size = 5;

int main(void){

    // array of size 5 where each element is two times the previous and start with 1

    int numbers[size];
    numbers[0] = 1;

    for(int i = 1; i < size; i++){
        numbers[i] = numbers[i-1] * 2;
    }

    for(int i = 0; i < size; i++){
        printf("%d\n", numbers[i]);
    }

    //cheking if a lowercase string's characters are in alphabetical order 

    return 0;
}