#include <stdio.h>
#include <stdbool.h>

int main() {

    // arithmetic operators = + - * / % ++ --

    int x = 2;
    int y = 3;
    int z = 0;

    //z = x + y;
    //z = x - y;
    //z = x * y;
    //z = x / y;
    z = x % y;
    
    //x++;
    x--;

    //y+=3;
    y*3; // This we can do multiplication or add, etc to the same value

    printf("%d\n", z);
    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}