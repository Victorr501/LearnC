#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int age = 76;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18 && age <65){
        printf("You are an adult\n");
    } else if (age >= 65){
        printf("You are an seniro\n");
    } else if (age < 0){
        printf("You haven't been born yet\n");
    } else if (age == 0 ){
        printf("You are a newborn\n");
    }else {
        printf("You aren't an adult\n");
    }

    bool isStudient = false;
    
    if (isStudient)
    {
        printf("You are a student\n");
    } else {
        printf("You are NOT a student\n");
    }
    
    char name[50] = "";

    printf("Enter your name: ");
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Esta línea limpia el salto de línea residual
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0){
        printf("You did not enter your name");
    } else {
        printf("Hello %s\n", name);
    }

    return 0;
}