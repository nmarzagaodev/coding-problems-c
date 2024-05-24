#include <stdio.h>
#include <stdbool.h>

#include "./bubbleSort.h"

int main() {
    size_t size = 10;
    RandomArray_Int *randomArray = createRandomArray_Int(size);

    if (randomArray != NULL) {
        printf("Random Array: ");
        printRandomArray_Int(randomArray);

        bubbleSort(randomArray);

        printf("Sorted Array: ");
        printRandomArray_Int(randomArray);

        freeRandomArray_Int(randomArray);
    } else {
        printf("Failed to create random array.\n");
    }

    return 0;
}
