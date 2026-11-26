## Const

Este artibuto indica que el valor y el espacio en memoria sera el mismo siempre, para poder modificar uno de los 2 se puede hacer lo siguiente

const int *p: No puedo modificar el valor al que apunta, pero si cambiar a dónde apunta p
int * const p: Puedes modificar el valor al que apunta, pero p siempre apuntará a la misma dirección de memoria

## restrict

Lo que hace es confiar en ti y no volver a revisar ese mimo punto de memoria si se usa en mas de una vez

## typedef 

Evita escribir tipos largos o complejos repetidamente (muy útil con estructuras struct o punteros)

Es decir guarda un tipo de dato que es muy largo entonces siempre que escribas el nombre va a hacer un referencia a ese tipo

## atomic

se necesita incluir <stdatomic.h>

atomic sirve para crear una variable la cual todos los procesos que hagan los hilos vaya en cola y de 1 en 1