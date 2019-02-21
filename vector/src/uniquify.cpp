//
// Created by haowei on 2/20/19.
//

#include "Vector.h"

// Complexity O(n)
template <typename T>
int Vector<T> ::uniquify() {
    Rank i=0,j=0;
    while (++j<_size){
        if (_elem[i]!=_elem[j]){
            _elem[++i]=_elem[j];
        }
    }
    _size = i++;
    shrink();
    return j-i;
}