#include "randomarray_int.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

RandomArray_Int *createRandomArray_Int(size_t size) {
    RandomArray_Int *arr = (RandomArray_Int *)malloc(sizeof(RandomArray_Int));
    if (arr == NULL) {
        return NULL;
    }

    arr->size = size;
    arr->array = (int *)malloc(size * sizeof(int));
    if (arr->array == NULL) {
        free(arr);
        return NULL;
    }

    srand(time(NULL));
    for (size_t i = 0; i < size; i++) {
        arr->array[i] = rand() % 100;
    }

    return arr;
}

void printRandomArray_Int(const RandomArray_Int *arr) {
    printf("[ ");
    for (size_t i = 0; i < arr->size; i++) {
        printf("%d ", arr->array[i]);
    }
    printf("]\n");
}

void freeRandomArray_Int(RandomArray_Int *arr) {
    if (arr != NULL) {
        free(arr->array);
        free(arr);
    }
}
