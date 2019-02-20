//
// Created by haowei on 2/19/19.
//

#include "Vector.h"

template <typename T>
const T& Vector<T>::operator[](Rank r) const {
    return _elem[r];
}