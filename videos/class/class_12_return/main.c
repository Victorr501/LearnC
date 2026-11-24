#include <stdio.h>
#include <stdbool.h>

bool ageCheck(int age){
    if (age >= 18){
        return true;
    } else {
        return false;
    }
}

double cube(double num){
    return num * num * num;
}

int square(int num){
    int result = num * num;

    return result;
}

int getMax(int x, int y){
    if (x >= y){
        return x;
    } else {
        return y;
    }
}

int main() {
    double x = cube(2.6);
    double y = cube(3.7);
    double z = cube(4.456);

    printf("%.5lf\n", x);
    printf("%.5lf\n", y);
    printf("%.5lf\n", z);

    int age = 21;

    if(ageCheck(age)){
        printf("You may sign up\n");
    } else {
        printf("You must be 18+ to sing up\n");
    }

    int num = getMax(2,5);

    printf("%d\n", num);

    return 0;
}