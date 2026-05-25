#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int result =  arr[2]; 

    // Find if 1 is in the array
    for (int l = 0; l < 5; l++) {
        if ( arr[l] == 1) {
            printf("True\n");
            break;
        }
    }

    // insert values in the array



    return 0;
}