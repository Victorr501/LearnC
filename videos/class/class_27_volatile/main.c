#include <stdio.h>

int main(void){

    // Lo que hace la declaración volatile es que obliga al ordenador a volver a leerla desde la RAM en vez de crear una variable en la cache de la CPU y asi te aseguras de
    // que no varia, aunque procesadores mas modernos no aplican esto y se recomienda utilizar _atomic

    volatile int bandera = 0;
    while (bandera == 0) { }

    return 0;
}