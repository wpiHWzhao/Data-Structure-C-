//
// Created by haowei on 2/19/19.
//

#include "Vector.h"

template <typename T>
void Vector<T>::shrink() {
    if (_capacity<DEFAULT_CAPACITY) return;
    if (_size>0.25*_capacity) return; // 25% as threshold
    T* oldElem = _elem;
    _elem = new T[_capacity=_capacity/2]; // Reduce the capacity to 50%
    for (int i = 0; i <_size; ++i) {
        _elem[i] = oldElem[i];
    }
    delete []oldElem;
}