//
// Created by haowei on 2/20/19.
//

#include "Vector.h"

template <typename T>
void Vector<T>::traverse(void (*visit)(T &)) { // Function pointer
    for (int i = 0; i < _size; ++i) {
        visit(_elem[i]);
    }
}

template <typename T> template <typename VST>
void Vector<T>::traverse(VST &visit) { // Functor
    for (int i = 0; i < _size; ++i) {
        visit(_elem[i]);
    }
}