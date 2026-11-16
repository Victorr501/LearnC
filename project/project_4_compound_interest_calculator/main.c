#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main() {
    
    double principal = 0.0f;
    double rate = 0.0f;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0f;
    char charRate = '%';

    printf("Compoun Interest Calculator\n");

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate (%c): ", charRate);
    scanf("%lf", &rate);
    rate = rate/100

    printf("Enter the years (Y): ");
    scanf("%d", &years);

    printf("Enter time compounded (T): ");
    scanf("%d", &timesCompounded);

    total = principal * pow((1+ (rate/timesCompounded)), (years *timesCompounded));

    printf("The total is: %.2lf", total);

    return 0;
}