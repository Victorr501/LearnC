#include <stdio.h>
#include <stdatomic.h>

// 1. TYPEDEF: alias para un tipo largo
typedef unsigned long long int u64;

void sumar (int * restrict a, const int * restrict b){
    *a += *b;
}

int main(void){

    u64 id = 10001;

    const int EXTRA = 5;
    int total = 10;

    sumar(&total, &EXTRA);

    _Atomic(int) contador = 0;
    contador++;

    printf("ID: %llu | Total: %d | Contador: %d\n", id, total, contador);
    return 0;
}
