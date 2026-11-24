#include <stdio.h>

int main(){

    int numbers[] = {10, 20, 30, 40, 50};
    char grade[] = {'A', 'b', 'c', 'd', 'e'};
    char name[] ="Bro code";

    numbers[0] = 100;
    numbers[1] = 14;
    numbers[2] = 104;
    numbers[3] = 1420;
    numbers[4] = 15;
    
    for(int i = 0; i < 5; i++){
        printf("%d\n", numbers[i]); 
    }
 
    printf("%d", numbers[0]);

    return 0;
}