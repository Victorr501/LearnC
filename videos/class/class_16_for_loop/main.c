#include <stdio.h>
# include <Windows.h>


int main(){

    // for loop = Repeat some code a limited # of times
    //            for(Initialization; Condition: Update)

    for(int i = 10; i >= 0; i--){
        Sleep(1000);
        printf("%d\n", i);
    }

    printf("HAPPY NEW YEAR!");

    return 0;
}