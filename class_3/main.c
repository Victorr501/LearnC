#include <stdio.h>
#include <stdbool.h>

int main() {
    
    /* Format specifier = Special tokens thatn bgin with a % symbol,
                          followed by a character that specifes the data type
                          ond optional modifers (width, precision, flags)
                          They control ho data is displayed or interpeted
    */

    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Victor";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    // width

    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    printf("%-3d\n", num1);
    printf("%+03d\n", num2);
    printf("%+3d\n", num3);

    // precision

    float price1 = 19.99;
    float price2 = 1.5;
    float price3 = -100.0;

    printf("%+7.2f\n",price1);
    printf("%.1f\n",price2);
    printf("%f\n",price3);

    return 0;
}