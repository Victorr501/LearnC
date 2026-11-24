#include <stdio.h>

int main(){

    // Array of Strings

    char fruit[][10] = {"Apple", "Banana", "Coconut", "Pineapple"};
    int size = sizeof(fruit) / sizeof(fruit[0]);

    for(int i = 0; i < size; i++){
        printf("%s\n", fruit[i]);
    }

    return 0;
}