//
// Created by haowei on 2/19/19.
//

#include "Vector.h"

template <typename T>
const T& Vector<T>::operator[](Rank r) const { // Rvalue only
    return _elem[r];
}

template <typename T>
T& Vector<T>::operator[](Rank r) { // Rvalue only
    return _elem[r];
}