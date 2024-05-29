#ifndef RANDOMARRAY_INT_H
#define RANDOMARRAY_INT_H

#include <stddef.h>

typedef struct {
    int *array;
    size_t size;
} RandomArray_Int;

RandomArray_Int *createRandomArray_Int(size_t size);
void printRandomArray_Int(const RandomArray_Int *arr);
void freeRandomArray_Int(RandomArray_Int *arr);

#endif /* RANDOMARRAY_INT_H */
