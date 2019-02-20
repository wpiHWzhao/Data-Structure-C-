//
// Created by haowei on 2/19/19.
//

#include "Vector.h"

template <typename T>
void Vector<T>::expand() {
    if(_size<_capacity) return;
    if(_capacity<DEFAULT_CAPACITY) _capacity=DEFAULT_CAPACITY;
    T* oldElem = _elem;
    _elem = new T*[_capacity *=_capacity];
    for (int i = 0; i < _size ; ++i) {
        _elem[i] = oldElem[i];
    }
    delete []oldElem;
}
