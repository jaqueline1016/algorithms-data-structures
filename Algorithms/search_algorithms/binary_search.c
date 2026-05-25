#include <stdio.h>

int binarySearch(int list[],int size, int target) {
    int first = 0;
    int last = size - 1;

    while (first<= last) {

        int mid = (first + last)/2;

        if (list[mid] == target) {
            return mid;
        } else if (list[mid] < target) {
            first = mid + 1;
        } else {
            last = mid - 1;
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

    int index = binarySearch(list, size, target);
    verify(index);

    return 0;
}