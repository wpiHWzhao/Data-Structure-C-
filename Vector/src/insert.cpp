//
// Created by haowei on 2/19/19.
//

#include "Vector.h"

template <typename T>
Rank Vector<T>::insert(Rank r, const T &e) {
    expand();
    for (int i =_size; i>r; --i){
        _elem[i]=_elem[i-1];
    }
    _elem[r] = e;
    _size++;
    return r;
}

template class Vector<int>;