#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacidad = 2; // Empezamos con espacio para solo 2 numeros
    int cantidad = 0;  // Al inicio no hay nada guardado

    // 1. Pedimos la memoria inicial (para 2 enteros)
    int *lista = (int *)malloc(capacidad * sizeof(int));

    // Imaginemos un flujo donde entran datos indefinidos (simulado con un bucle de 5 vueltas)
    for (int i = 1; i <= 5; i++) {
        int nuevo_dato = i * 10; // Datos entrantes: 10, 20, 30, 40, 50

        // 2. ¿Se lleno el arreglo? ¡Hora de agrandarlo!
        if (cantidad == capacidad) {
            capacidad = capacidad * 2; // Duplicamos la capacidad (2 -> 4 -> 8)
            printf("\n --- !Arreglo lleno! Expandiendo capacidad a %d elementos ---\n", capacidad);
            
            // Realloc redistribuye el tamaño en la RAM
            lista = (int *)realloc(lista, capacidad * sizeof(int));
        }

        // 3. Insertamos el dato normalmente
        lista[cantidad] = nuevo_dato;
        cantidad++;
    }

    // Imprimir el resultado final
    printf("\nElementos guardados: ");
    for (int i = 0; i < cantidad; i++) {
        printf("%d ", lista[i]);
    }

    // 4. Devolver la memoria al sistema operativo al terminar
    free(lista);
    return 0;
}