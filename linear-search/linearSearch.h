#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include "./lib/randomarray_int.h"

bool linearSearch(RandomArray_Int* ra, int target) {
    for (size_t index = 0; index < ra->size; index++)
        if (ra->array[index] == target) return true;

    return false;
}

#endif /* LINEARSEARCH_H */