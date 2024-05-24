#include <stdio.h>
#include "./lib/randomarray_int.h"


int main() {
    size_t size = 10;
    RandomArray_Int *randomArray = createRandomArray_Int(size);

    if (randomArray != NULL) {
        printf("Random Array:\n");
        printf("Size: %zu\n", randomArray->size);
        printf("Elements: ");
        printRandomArray_Int(randomArray);

        freeRandomArray_Int(randomArray);
    } else {
        printf("Failed to create random array.\n");
    }

    return 0;
}
