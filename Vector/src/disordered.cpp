//
// Created by haowei on 2/20/19.
//

#include "Vector.h"

template <typename T>
int Vector<T>::disordered() const {
    int n=0;
    for (int i =1; i<_size; ++i){
        if (_elem[i-1]>_elem[i]) n++;
    }
    return n; // 0 if the vector is in order.
}

template class Vector<int>;