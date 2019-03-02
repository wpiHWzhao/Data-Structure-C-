//
// Created by haowei on 2/19/19.
//

#include "Vector.h"

template <typename T>
void Vector<T>::copyFrom(const T *A, Rank lo, Rank hi) {
    _elem = new T[_capacity*(hi-lo)];
    _size =0;
    while (lo<hi){ // [lo,hi)
        _elem[_size++] = A[lo++];
    }
}

template class Vector<int>;