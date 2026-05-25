#include <stdio.h>

// true 1
// false 0

int recursiveBinarySearch(int list[], int size, int target) {
    if (size == 0) {
        return 0;
    }
    else {
        int midpoint =  size /2;

        if( list[midpoint]==  target) {
            return 1;
        }
        else {
            if (list[midpoint] < target) {
                return recursiveBinarySearch(list + midpoint + 1, size - midpoint - 1, target);
            }
            else {
                return recursiveBinarySearch(list, midpoint, target);
            }
        }

    }
}

void verify(int result) {
    if (result == 1) {
        printf("Target found: True\n");
    } else {
        printf("Target found: False\n");
    }
}

int main() {
    int list[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 6;
    int size = sizeof(list) / sizeof(list[0]);

    int result = recursiveBinarySearch(list, size, target);
    verify(result);

    return 0;
}
