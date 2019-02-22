//
// Created by haowei on 2/19/19.
//
#include "Vector.h"

template <typename T>
Vector<T>& Vector<T>::operator=(const Vector<T> & V) {
    if(_elem) delete []_elem;
    copyFrom(V._elem,0,V.size());

    return *this;
}


template class Vector<int>;