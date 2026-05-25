#include <stdio.h>


int linearSearch(int list[],int size,int target) {
    //  returns the index position of the target if found, otherwise returns -1
    for (int i = 0; i < size; i++) {
        if (list[i] == target) {
            return i;
        }
    }
    return -1;
}

void verify(int index) {
    if (index != -1) {
        printf("Target found at index: %d\n", index);
    } else {
        printf("Target not found in the list.\n");
    }
}

int main() {
    int list[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 6;
    int size = sizeof(list) / sizeof(list[0]);

    int index = linearSearch(list, size, target);
    verify(index);

    return 0;
}