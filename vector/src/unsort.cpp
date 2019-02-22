//
// Created by haowei on 2/19/19.
//
#include "Vector.h"

template <typename T>
void Vector<T>::unsort(Rank lo, Rank hi) {
    T* V = _elem+lo;
    for (int i = hi-lo; i >0 ; --i) {
        swap(V[i-1],V[rand()%i]);
    }
}

template class Vector<int>;