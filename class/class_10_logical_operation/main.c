#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = Used to combine or modify boolean expressions.

    // && = AND
    // || = OR
    // ! = NOT

    int temp = 0;

    if(temp > 0 && temp < 30){
        printf("The temperature is GOOD");
    } else{
        printf("The temperature is BAD");
    }

    bool isSunny = false;

    if(!isSunny){
        printf("It is Cloudy outside");
    } else{
        printf("It is Sunny outside");
    }



    return 0;
}