#include <stdio.h>

int main(){

    // TEMPERATURE CONVERSION PROGRAM

    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp in Celsius (C) or Fahrenheit (F)?: ");
    scanf("%c", &choice);

    if (choice == 'C' || choice == 'c' )
    {
        // C to F
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.1f celsius is equal to %.1f fahrenheit\n", celsius, fahrenheit);
    } else if (choice == 'F' || choice == 'f'){
        // F to C
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = fahrenheit / 2.20462;
        printf("%.1f fahrenheit is equal to %.1f celsius\n", fahrenheit, celsius);
        
    } else{
        printf("Invalid choice! Please enter C or F");
    }
    


    return 0;
}