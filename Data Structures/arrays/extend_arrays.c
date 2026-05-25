#include <stdio.h>
#include <stdlib.h> // Necesaria para malloc y realloc

int main() {
    int tamano_original = 3;
    // Creamos un arreglo dinamico para 3 elementos en el Heap
    // int puntero = (tipo_dato *)malloc(cantidad_elementos * sizeof(tipo_dato));
    int *arr = (int *)malloc(tamano_original * sizeof(int));
    arr[0] = 1; arr[1] = 2; arr[2] = 3;

    // Imprimir el arreglo original: 1 2 3
    for (int i = 0; i < tamano_original; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Los datos que queremos "extender"
    int extension[] = {4, 5, 8};
    int tamano_extension = 3;

    // imprimir la extension: 4 5 8
    for (int i = 0; i < tamano_extension; i++) {
        printf("%d ", extension[i]);
    }
    printf("\n");

    // 1. Calculamos el nuevo tamaño total (3 + 3 = 6)
    int nuevo_tamano = tamano_original + tamano_extension;

    // 2. Usamos realloc para agrandar nuestro arreglo en la memoria RAM
    // puntero = (tipo_dato *)realloc(puntero_original, Nuevo_tamanio_total_en_bytes);
    arr = (int *)realloc(arr, nuevo_tamano * sizeof(int));

    // 3. Copiamos los nuevos elementos al final mediante un bucle
    for (int i = 0; i < tamano_extension; i++) {
        // El llenado empieza justo donde terminó el anterior (indice 3, 4 y 5)
        arr[tamano_original + i] = extension[i];
    }

    // Imprimir el arreglo extendido: 1 2 3 4 5 8
    for (int i = 0; i < nuevo_tamano; i++) {
        printf("%d ", arr[i]);
    }

    // 4. ¡Siempre liberar la memoria dinamica!
    free(arr);
    return 0;
}