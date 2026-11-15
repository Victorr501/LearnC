#include <stdio.h>
#include <stdbool.h>

int main(){
    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contains.

    int age = 25;
    int years = 2026;
    int quantity = 1;

    printf("You are %d years old\n", age);
    printf("The year is %d\n", years);
    printf("Yo have orderd %d x items\n", quantity);

    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;

    printf("Your gpa is %f\n", gpa);
    printf("The price is $%f \n", price);
    printf("The temperature is %f \n", temperature);

    double pi = 3.1415926535879;
    double e = 2.7182818284590;

    printf("The value of pi is %.15lf \n", pi);
    printf("The value of e  is %.15lf \n", e);
    
    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n", symbol);
    printf("The currency is %c and %c \n", currency, symbol);

    char name[] = "Bro Code";
    char food[] = "Pizza";
    char email[] = "fake123@gmail.com";

    printf("Hello %s\n", name );
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s \n", email);

    bool isOnline = false;
    bool isNotOnline = false;

    printf("%d\n", isOnline);
    printf("%d\n", isNotOnline);

    if (isOnline){
        printf("You are ONLINE");
    } else if (!isNotOnline)
    {
        printf("You are OFFLINE");
    }
    
    /*
    int = whole numbers (4 bytes in modern systems)
    float = single-precion decimal number (4 bytes)
    double = double-precision decimal number (8 bytes)
    char = single character (1 byte)
    char[] = array of characters (size varies)
    bool = true or fale (1 byte, requires <stdbool.h>)
    
    */

    return 0;
}