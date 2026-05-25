#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30}; 
    int cantidad = 3;
    
    int indice_insertar = 1; 
    int valor_nuevo = 99;

    // RECORRER ELEMENTOS: Empezamos desde el final y los movemos a la derecha
    for (int i = cantidad; i > indice_insertar; i--) {
        arr[i] = arr[i - 1];
    }

    // Ahora que el espacio en índice 1 quedó "libre" (duplicado en el índice 2), insertamos
    arr[indice_insertar] = valor_nuevo;
    cantidad++; // Ahora hay 4 elementos


    for(int i = 0; i < cantidad; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}