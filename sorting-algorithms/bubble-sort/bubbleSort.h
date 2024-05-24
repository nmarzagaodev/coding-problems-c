#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include "./lib/randomarray_int.h"

void swap_integers(int* a, int* b) {
    int tmp;
    tmp = *a;
    *a  = *b;
    *b  = tmp;
}

void bubbleSort(RandomArray_Int* ra) {
    bool swapped;

    for (size_t i = 0; i < ra->size; i++) {
        swapped = false;

        for (size_t j = 0; j < ra->size; j++) {
            if (ra->array[j] > ra->array[j + 1]) {
                swap_integers(&ra->array[j], &ra->array[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false) break;
    }
}

#endif /* LINEARSEARCH_H */