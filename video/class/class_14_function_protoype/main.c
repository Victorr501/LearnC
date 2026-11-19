#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void hello (char name[], int age); //funtion prototype
bool ageCheck(int age);

int main(){

    hello("Spongebob", 30);
    
    if(ageCheck(30)){
        printf("You are old enough to work at the Krusty krab");
    } else {
        printf("You must be 16+ to work at the krusty krab");
    }

    return 0;
}

void hello (char name[], int age){
    printf("Hello %s\n", name);
    printf("Your are %d years old\n", age);
}

bool ageCheck(int age){
    if (age >= 16){
        return true;
    } else {
        return false;
    }
}