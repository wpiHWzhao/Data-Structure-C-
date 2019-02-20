//
// Created by haowei on 2/19/19.
//
#include "Vector.h"

template <typename T>
int Vector<T>::deduplicate() {
    int oldSize = _size;
    Rank i=1;
    while (i<_size){
        (find(_elem[i],0,_size)<0) ? i++:remove(i);
    }
    return oldSize-_size;
}
