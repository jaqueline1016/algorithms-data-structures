#include <stdio.h>

int main() {

    int arr[5] = {1,2,3};

    int cantidad = 3; // cantidad de elementos // tamaño de cada elemento    

    int newValue = 4;

    arr[cantidad] = newValue;
    cantidad++;

    for (int i = 0; i < cantidad; i++) {
        printf("%d ", arr[i]);
    }
    return 0;

}
