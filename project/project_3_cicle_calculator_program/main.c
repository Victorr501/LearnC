#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(){

    double radios = 0.0f;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("enter the radius: ");
    scanf("%lf", &radios);

    area = PI * pow(radios, 2);
    surfaceArea = 4 * PI * pow(radios, 2);
    volume = (4.0 / 3.0)*PI*pow(radios, 3);

    printf("Area: %.3lf\n", area);
    printf("Surface area: %.3lf\n", surfaceArea);
    printf("Volum: %.3lf\n", volume);

    return 0;
}