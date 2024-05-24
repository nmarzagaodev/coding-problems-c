#include <stdio.h>
#include <stdbool.h>
#include "./lib/randomarray_int.h"


bool linearSearch(RandomArray_Int* ra, int target) {
    for (size_t index = 0; index < ra->size; index++)
        if (ra->array[index] == target) return true;

    return false;
}


int main() {
    size_t size = 5;
    RandomArray_Int *randomArray = createRandomArray_Int(size);

    if (randomArray != NULL) {
        printf("Array: ");
        printRandomArray_Int(randomArray);

        if (linearSearch(randomArray, 1)) 
            printf("1 is in Array\n");
        if (linearSearch(randomArray, 5)) 
            printf("5 is in Array\n");
        if (linearSearch(randomArray, 9)) 
            printf("9 is in Array\n");
        
    } else {
        printf("Failed to create random array.\n");
        return 1;
    }

    return 0;
}
